#!/usr/bin/env python3
# cos_batch.py <list_file> — batch static-recompile a set of Cossacks plugin DLLs.
# Each line of <list_file>: <module_name> <dll_path>
# For each DLL: assign a packed load base, Ghidra->functions.csv, shift addrs by
# delta, rebase sections, transpile -> recomp_src/. Emits a manifest.json.
# Resumable: skips a DLL whose recomp_src/resolve.c already exists.
import sys, os, struct, subprocess, csv, json

PY      = r"C:\emsdk\python\3.13.3_64bit\python.exe"
GHIDRA  = r"C:\123\ghidra_12.1.2_PUBLIC\support\analyzeHeadless.bat"
JAVAHOME= r"C:\Program Files\Java\jdk-26.0.1"
SCRIPTS = r"C:\cossacks_wasm\x86\ghidra"
X86DIR  = r"C:\cossacks_wasm\x86"
OUTROOT = r"C:\cossacks_wasm\x86\dll"
PROJ    = r"C:\scratchpad\ghidra_proj"
PREF_BASE = 0x10000000
SPACING_ALIGN = 0x10000

def u16(b,o): return struct.unpack_from('<H',b,o)[0]
def u32(b,o): return struct.unpack_from('<I',b,o)[0]

def pe_info(path):
    d=open(path,'rb').read()
    e=u32(d,0x3C); coff=e+4; optsz=u16(d,coff+16); opt=coff+20
    return {'imagebase':u32(d,opt+28),'entry':u32(d,opt+16),'sizeofimage':u32(d,opt+56)}

def run_ghidra(dll, funcs_out):
    if os.path.exists(funcs_out): return True
    env=dict(os.environ); env['JAVA_HOME']=JAVAHOME; env['PATH']=JAVAHOME+r"\bin;"+env['PATH']
    env['FUNCS_OUT']=funcs_out; env['MSYS_NO_PATHCONV']='1'
    import shutil; shutil.rmtree(PROJ, ignore_errors=True); os.makedirs(PROJ, exist_ok=True)
    r=subprocess.run([GHIDRA, PROJ, "tmp", "-import", dll, "-overwrite",
                      "-postScript","ExportFuncsCSV.java","-scriptPath",SCRIPTS,"-deleteProject"],
                     env=env, capture_output=True, text=True, timeout=600)
    return os.path.exists(funcs_out)

def shift_funcs(funcs_out, delta, out_shifted):
    rows=list(csv.DictReader(open(funcs_out)))
    with open(out_shifted,'w',newline='') as f:
        w=csv.writer(f); w.writerow(['address','name','sizeBytes'])
        for r in rows:
            try: va=int(r['address'],16)
            except: continue
            w.writerow(['%08x'%((va+delta)&0xffffffff), r['name'], r['sizeBytes']])

def meta_val(metatxt, key):
    for line in open(metatxt):
        if line.startswith(key+'='): return line.split('=')[1].strip().split()[0]
    return None

def main():
    lst=[l.rstrip('\n').split(None,1) for l in open(sys.argv[1]) if l.strip() and not l.startswith('#')]
    base=PREF_BASE; manifest=[]
    for name, dll in lst:
        info=pe_info(dll)
        outdir=os.path.join(OUTROOT, name)
        os.makedirs(outdir, exist_ok=True)
        # pack base (align up)
        this_base=base
        siz=(info['sizeofimage']+SPACING_ALIGN-1)&~(SPACING_ALIGN-1)
        base=this_base+siz
        delta=(this_base-info['imagebase'])&0xffffffff
        entry=(this_base+info['entry'])
        rec_done=os.path.exists(os.path.join(outdir,'recomp_src','resolve.c'))
        print("[batch] %-16s base=%#010x size=%#x entry=%#x %s"%(name,this_base,siz,entry,"(done)" if rec_done else ""))
        manifest.append({'name':name,'dll':dll,'base':this_base,'entry':entry,'imagebase':info['imagebase']})
        if rec_done: continue
        # 1) Ghidra -> functions.csv (at preferred base)
        fpref=os.path.join(outdir,'functions_pref.csv')
        if not run_ghidra(dll, fpref): print("   GHIDRA FAILED",name); continue
        # 2) shift addresses by delta -> functions.csv
        shift_funcs(fpref, delta, os.path.join(outdir,'functions.csv'))
        # 3) prep (rebase sections)
        subprocess.run([PY, os.path.join(X86DIR,'cos_prep_dll.py'), dll, outdir, '%#x'%this_base], check=True)
        # 4) transpile -> recomp_src
        env=dict(os.environ)
        env['COS_DLLDIR']=outdir
        env['COS_TEXT_VA']=meta_val(os.path.join(outdir,'meta.txt'),'text_va') or '%#x'%(this_base+0x1000)
        # derive text vsz from meta
        for line in open(os.path.join(outdir,'meta.txt')):
            if line.startswith('text_va='):
                env['COS_TEXT_VSZ']=line.split('vsz=')[1].strip()
        env['COS_RDATA_VA']=meta_val(os.path.join(outdir,'meta.txt'),'rdata_va') or '%#x'%(this_base+0xe000)
        env['COS_DATA_VA'] =meta_val(os.path.join(outdir,'meta.txt'),'data_va')  or '%#x'%(this_base+0xf000)
        subprocess.run([PY, os.path.join(X86DIR,'cos_translate.py')], env=env, cwd=X86DIR, check=True)
        # regen recomp.h for this dll
        gen_recomp_h(outdir)
        print("   done",name)
    json.dump(manifest, open(os.path.join(OUTROOT,'manifest.json'),'w'), indent=1)
    print("[batch] manifest: %d modules, next free base %#x"%(len(manifest),base))

def gen_recomp_h(outdir):
    decls=[]
    for row in csv.DictReader(open(os.path.join(outdir,'functions.csv'))):
        try: va=int(row['address'],16)
        except: continue
        decls.append("void f_%08x(void);"%va)
    hdr=('#ifndef COS_RECOMP_H\n#define COS_RECOMP_H\n#include "cpu.h"\n#include <stdio.h>\n'
         'void x86_unimpl(const char*);\nx86fn x86_compiled(uint32_t);\n'
         '#define FTRACE(v) ((void)0)\n#define ESPCHK(va,e0) ((void)0)\n'
         +"\n".join(decls)+"\n#endif\n")
    open(os.path.join(outdir,'recomp_src','recomp.h'),'w').write(hdr)

if __name__=='__main__': main()
