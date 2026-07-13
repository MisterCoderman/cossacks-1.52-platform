/* cos_load.c — minimal PE (DLL) loader into the guest flat memory. */
#include "cos_x86.h"
#include "cpu.h"
#include <stdio.h>
#include <string.h>

static uint16_t fu16(const uint8_t *b, size_t o) { return (uint16_t)(b[o] | (b[o+1] << 8)); }
static uint32_t fu32(const uint8_t *b, size_t o) {
    return (uint32_t)b[o] | ((uint32_t)b[o+1] << 8) | ((uint32_t)b[o+2] << 16) | ((uint32_t)b[o+3] << 24);
}
static const char *gstr(uint32_t va) { return (const char *)gp(va); }

int cos_pe_load(const uint8_t *d, size_t dsz, uint32_t load_base, CosModule *mod) {
    memset(mod, 0, sizeof *mod);
    uint32_t e = fu32(d, 0x3C);
    if (e + 4 > dsz || memcmp(d + e, "PE\0\0", 4)) { fprintf(stderr, "[cos_load] bad PE\n"); return -1; }
    uint32_t coff = e + 4;
    uint16_t nsec = fu16(d, coff + 2), optsz = fu16(d, coff + 16);
    uint32_t opt = coff + 20;
    uint32_t imagebase   = fu32(d, opt + 28);
    uint32_t entryrva    = fu32(d, opt + 16);
    uint32_t sizeofimage = fu32(d, opt + 56);
    uint32_t dd = opt + 96;
    uint32_t exp_rva = fu32(d, dd + 0*8);
    uint32_t imp_rva = fu32(d, dd + 1*8);
    uint32_t rel_rva = fu32(d, dd + 5*8), rel_sz = fu32(d, dd + 5*8 + 4);
    int32_t  delta = (int32_t)(load_base - imagebase);

    mod->base = load_base; mod->entry = load_base + entryrva; mod->image_end = load_base + sizeofimage;

    /* 1) map sections */
    uint32_t sec = opt + optsz;
    for (int i = 0; i < nsec; i++) {
        uint32_t o = sec + i*40;
        uint32_t vsz = fu32(d, o + 8), va = fu32(d, o + 12), rsz = fu32(d, o + 16), ra = fu32(d, o + 20);
        uint32_t n = rsz < vsz ? rsz : vsz;
        if ((size_t)ra + n <= dsz) memcpy(g_mem + ((load_base + va) & GMASK), d + ra, n);
        /* Zero the BSS tail (VirtualSize > SizeOfRawData): a PE's uninitialized globals MUST read
           as 0. Mission DLLs are loaded/unloaded into a shared guest memory region, so without
           this the uninitialized part keeps stale bytes from a previously-loaded module. General
           correctness (standard PE-loader behaviour); keeps missions from reading leftover data in
           their uninitialized globals. */
        if (vsz > n) memset(g_mem + ((load_base + va + n) & GMASK), 0, vsz - n);
    }

    /* 2) base relocations (read from the just-loaded .reloc in g_mem) */
    if (delta && rel_rva) {
        uint32_t p = load_base + rel_rva, end = p + rel_sz;
        while (p + 8 <= end) {
            uint32_t page = r32(p), bsz = r32(p + 4);
            if (bsz < 8) break;
            uint32_t nent = (bsz - 8) / 2;
            for (uint32_t k = 0; k < nent; k++) {
                uint16_t ent = r16(p + 8 + k*2);
                uint32_t type = ent >> 12, off = ent & 0xFFF;
                if (type == 3) { uint32_t a = load_base + page + off; w32(a, r32(a) + (uint32_t)delta); }
                /* type 0 = pad; HIGH/LOW (1/2) unused by MSVC x86 */
            }
            p += bsz;
        }
    }

    /* 3) imports: fill IAT slots with synthetic addresses */
    if (imp_rva) {
        uint32_t desc = load_base + imp_rva;
        for (;; desc += 20) {
            uint32_t oft = r32(desc), name_rva = r32(desc + 12), ft = r32(desc + 16);
            if (oft == 0 && name_rva == 0 && ft == 0) break;
            uint32_t thunk_names = load_base + (oft ? oft : ft);  /* name array */
            uint32_t iat = load_base + ft;                        /* address array to fill */
            for (uint32_t j = 0;; j++) {
                uint32_t v = r32(thunk_names + j*4);
                if (v == 0) break;
                const char *fname;
                if (v & 0x80000000u) { static char ob[16]; snprintf(ob, sizeof ob, "#%u", v & 0xFFFF); fname = ob; }
                else fname = gstr(load_base + v + 2);   /* hint(2) + name */
                w32(iat + j*4, cos_sym(fname));
            }
        }
    }

    /* 4) exports */
    if (exp_rva) {
        uint32_t ed = load_base + exp_rva;
        uint32_t nnames = r32(ed + 24);
        uint32_t aof = load_base + r32(ed + 28);
        uint32_t nof = load_base + r32(ed + 32);
        uint32_t oof = load_base + r32(ed + 36);
        for (uint32_t i = 0; i < nnames && mod->nexports < 32; i++) {
            uint32_t nm = load_base + r32(nof + i*4);
            uint16_t ord = r16(oof + i*2);
            uint32_t frva = r32(aof + ord*4);
            strncpy(mod->exports[mod->nexports].name, gstr(nm), 63);
            mod->exports[mod->nexports].va = load_base + frva;
            mod->nexports++;
        }
    }
    fprintf(stderr, "[cos_load] %s @ 0x%08x (delta %d) entry=0x%08x, %d exports\n",
            mod->path[0]?mod->path:"dll", load_base, (int)delta, mod->entry, mod->nexports);
    return 0;
}

uint32_t cos_export_va(const CosModule *mod, const char *name) {
    for (int i = 0; i < mod->nexports; i++)
        if (!strcmp(mod->exports[i].name, name)) return mod->exports[i].va;
    return 0;
}
