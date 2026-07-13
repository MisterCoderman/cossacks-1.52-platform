#!/usr/bin/env python3
# cos_prep_dll.py <dll_path> <out_dir> <load_base_hex>
# Extract a plugin DLL's sections, REBASE them to load_base (apply .reloc delta so
# absolute addresses in the recompiled C match the runtime-relocated guest memory),
# and write text/rdata/data.bin + meta.txt (base, entry, section VAs, imagebase).
# The runtime loader (cos_load.c) relocates the ORIGINAL dll to the same base, so
# recomp constants and runtime memory agree.
import sys, struct, os

def u16(b,o): return struct.unpack_from('<H',b,o)[0]
def u32(b,o): return struct.unpack_from('<I',b,o)[0]

dll, outdir, base = sys.argv[1], sys.argv[2], int(sys.argv[3],16)
os.makedirs(outdir, exist_ok=True)
d = bytearray(open(dll,'rb').read())
e=u32(d,0x3C); coff=e+4; nsec=u16(d,coff+2); optsz=u16(d,coff+16); opt=coff+20
imagebase=u32(d,opt+28); entry=u32(d,opt+16); sizeofimage=u32(d,opt+56)
dd=opt+96
reloc_rva=u32(d,dd+5*8); reloc_sz=u32(d,dd+5*8+4)
delta=(base-imagebase)&0xffffffff
sec=opt+optsz
secs=[]  # (name,va,vsz,ra,rsz)
for i in range(nsec):
    o=sec+i*40
    name=d[o:o+8].rstrip(b'\0').decode('latin-1')
    secs.append((name,u32(d,o+12),u32(d,o+8),u32(d,o+20),u32(d,o+16)))

def rva2fileoff(rva):
    for name,va,vsz,ra,rsz in secs:
        if va<=rva<va+max(vsz,rsz): return ra+(rva-va)
    return None

# apply base relocations to the FILE image (patch dwords at reloc targets by delta)
if delta and reloc_rva:
    p=rva2fileoff(reloc_rva)               # .reloc blocks live at this FILE offset
    end=p+reloc_sz
    while p is not None and p+8<=end and p+8<=len(d):
        page=u32(d,p); bsz=u32(d,p+4)
        if bsz<8: break
        for k in range((bsz-8)//2):
            ent=u16(d,p+8+k*2); typ=ent>>12; off=ent&0xfff
            if typ==3:
                fo=rva2fileoff(page+off)
                if fo is not None and fo+4<=len(d):
                    v=(u32(d,fo)+delta)&0xffffffff
                    struct.pack_into('<I',d,fo,v)
        p+=bsz

# write rebased section bins at the NEW VAs (base+rva)
meta=['imagebase=%#x'%base, 'entry=%#x'%(base+entry), 'sizeofimage=%#x'%sizeofimage]
for name,va,vsz,ra,rsz in secs:
    raw=bytes(d[ra:ra+rsz])
    body=raw[:vsz] if vsz<=len(raw) else raw+b'\0'*(vsz-len(raw))
    fn=name.strip('.') or 'sec'
    if name.lower().startswith('.text'):  open(os.path.join(outdir,'text.bin'),'wb').write(body); meta.append('text_va=%#x vsz=%#x'%(base+va,vsz))
    elif name.lower().startswith('.rdata'):open(os.path.join(outdir,'rdata.bin'),'wb').write(body); meta.append('rdata_va=%#x vsz=%#x'%(base+va,vsz))
    elif name.lower().startswith('.data'): open(os.path.join(outdir,'data.bin'),'wb').write(body); meta.append('data_va=%#x vsz=%#x'%(base+va,vsz))
open(os.path.join(outdir,'meta.txt'),'w').write('\n'.join(meta)+'\n')
print("prepped %s -> base %#x delta %#x entry %#x"%(os.path.basename(dll),base,delta,base+entry))
