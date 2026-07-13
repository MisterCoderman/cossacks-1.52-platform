/* ops_cache.c - decode-on-demand Op cache backing op_at() for the SM2 interp.
 *
 * woody pre-decoded every instruction into a static g_ops[] table; SM2 instead
 * decodes lazily: op_at(va) returns the cached Op if present, else decodes it
 * (decode_x86.c) into a stable arena and inserts it. Rationale (see PORT_PLAN):
 * UE2 is massively virtual, so a static reachable-set would miss vtable targets;
 * lazy decode naturally covers whatever actually executes and never trips on
 * data/padding. All module images are loaded into g_mem up front (pe_loader),
 * so a va is decodable the moment control reaches it; no cache invalidation is
 * needed (no self-modifying code; IAT is pre-linked, GetProcAddress is read-only).
 *
 * Arena = linked chunks of Op (pointers stay valid forever). Index = open-address
 * hash on va with linear probing; value = the Op* in the arena.
 */
#include "cpu.h"
#include "ops.h"
#include "link_gen.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#define HBITS 22
#define HSIZE (1u << HBITS)
#define HMASK (HSIZE - 1u)
#define CHUNK 65536

static const Op **g_hash;         /* HSIZE slots, calloc'd (NULL == empty) */
static Op       **g_chunks;       /* array of chunk pointers */
static int        g_nchunks, g_chcap, g_choff = CHUNK;  /* force first alloc */
static uint32_t   g_ncached;

static Op *arena_alloc(void){
    if (g_choff >= CHUNK){
        if (g_nchunks >= g_chcap){
            g_chcap = g_chcap ? g_chcap * 2 : 64;
            g_chunks = (Op **)realloc(g_chunks, (size_t)g_chcap * sizeof(Op *));
        }
        g_chunks[g_nchunks++] = (Op *)malloc((size_t)CHUNK * sizeof(Op));
        g_choff = 0;
    }
    return &g_chunks[g_nchunks - 1][g_choff++];
}

static void cache_init(void){
    g_hash = (const Op **)calloc(HSIZE, sizeof(Op *));
    if (!g_hash){ fprintf(stderr, "[ops_cache] hash calloc failed\n"); abort(); }
}

uint32_t sm2_ops_cached(void){ return g_ncached; }   /* diag */

const Op *op_at(uint32_t va){
    /* synthetic shim thunks and null/low targets have no Op: let the interpreter
     * dispatch the native shim (or diagnose a null indirect call). */
    if (va >= SM2_SHIM_BASE || va < 0x1000u) return 0;

    if (!g_hash) cache_init();
    uint32_t h = (va * 2654435761u) & HMASK;
    while (g_hash[h]){
        if (g_hash[h]->va == va) return g_hash[h];
        h = (h + 1) & HMASK;
    }
    Op *o = arena_alloc();
    sm2_decode(va, o);            /* fills o->va = va and the instruction */
    o->nxt = o->br = 0;           /* op-chaining caches: lazily filled by interp.c */
    g_hash[h] = o;
    g_ncached++;
    return o;
}
