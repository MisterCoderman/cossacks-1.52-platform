#!/usr/bin/env python3
# Recompile the mission DLLs that collided on module names (multiple *different* DLLs in one
# folder collapsed to a single parent-dir name, so only one got recompiled). Give every such
# DLL a UNIQUE name derived from its full campaign-relative path, assign fresh load bases after
# the current manifest maximum, run Ghidra in PARALLEL (per-DLL project dir), transpile, and
# splice the results into dll/manifest.json (dropping the old collided entries).
import os, sys, struct, subprocess, csv, json, shutil, re
from concurrent.futures import ThreadPoolExecutor, as_completed

PY      = r"C:\emsdk\python\3.13.3_64bit\python.exe"
GHIDRA  = r"C:\123\ghidra_12.1.2_PUBLIC\support\analyzeHeadless.bat"
JAVAHOME= r"C:\Program Files\Java\jdk-26.0.1"
SCRIPTS = r"C:\cossacks_wasm\x86\ghidra"
X86DIR  = r"C:\cossacks_wasm\x86"
OUTROOT = r"C:\cossacks_wasm\x86\dll"
GAME    = r"C:\123\Cossacks\Cossacks Back to War v1.52 Classic Edition"
PROJROOT= r"C:\scratchpad\ghidra_proj_p"
SPACING_ALIGN = 0x10000

# the 3 collided module names whose entries must be rebuilt with unique names
COLLIDED = {"M_history_battl", "M_Horizon_Horizon1", "M_history_battl_Nerdlingen"}

def u16(b,o): return struct.unpack_from('<H',b,o)[0]
def u32(b,o): return struct.unpack_from('<I',b,o)[0]
def pe_info(path):
    d=open(path,'rb').read(); e=u32(d,0x3C); coff=e+4; opt=coff+20
    return {'imagebase':u32(d,opt+28),'entry':u32(d,opt+16),'sizeofimage':u32(d,opt+56)}

def uniq_name(dll):
    rel=os.path.relpath(dll, GAME)
    rel=os.path.splitext(rel)[0]
    return 'M_'+re.sub(r'[^0-9A-Za-z]+','_', rel).strip('_')

def run_ghidra(dll, funcs_out, proj):
    env=dict(os.environ); env['JAVA_HOME']=JAVAHOME; env['PATH']=JAVAHOME+r"\bin;"+env['PATH']
    env['FUNCS_OUT']=funcs_out; env['MSYS_NO_PATHCONV']='1'
    shutil.rmtree(proj, ignore_errors=True); os.makedirs(proj, exist_ok=True)
    subprocess.run([GHIDRA, proj, "tmp", "-import", dll, "-overwrite",
                    "-postScript","ExportFuncsCSV.java","-scriptPath",SCRIPTS,"-deleteProject"],
                   env=env, capture_output=True, text=True, timeout=900)
    return os.path.exists(funcs_out)

def shift_funcs(fpref, delta, out):
    with open(out,'w',newline='') as f:
        w=csv.writer(f); w.writerow(['address','name','sizeBytes'])
        for r in csv.DictReader(open(fpref)):
            try: va=int(r['address'],16)
            except: continue
            w.writerow(['%08x'%((va+delta)&0xffffffff), r['name'], r['sizeBytes']])

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

def transpile(outdir, this_base):
    subprocess.run([PY, os.path.join(X86DIR,'cos_prep_dll.py'),
                    JOB_DLL[outdir], outdir, '%#x'%this_base], check=True)
    env=dict(os.environ); env['COS_DLLDIR']=outdir
    meta=os.path.join(outdir,'meta.txt')
    def mv(key):
        for line in open(meta):
            if line.startswith(key+'='): return line.split('=')[1].strip().split()[0]
        return None
    env['COS_TEXT_VA']=mv('text_va') or '%#x'%(this_base+0x1000)
    for line in open(meta):
        if line.startswith('text_va='): env['COS_TEXT_VSZ']=line.split('vsz=')[1].strip()
    env['COS_RDATA_VA']=mv('rdata_va') or '%#x'%(this_base+0xe000)
    env['COS_DATA_VA'] =mv('data_va')  or '%#x'%(this_base+0xf000)
    subprocess.run([PY, os.path.join(X86DIR,'cos_translate.py')], env=env, cwd=X86DIR, check=True)
    gen_recomp_h(outdir)

JOB_DLL={}

def main():
    man=json.load(open(os.path.join(OUTROOT,'manifest.json')))
    keep=[m for m in man if m['name'] not in COLLIDED]
    collided_dlls=[m['dll'] for m in man if m['name'] in COLLIDED]
    print("manifest total=%d  keep=%d  collided-dlls-to-rebuild=%d"%(len(man),len(keep),len(collided_dlls)))
    # next free base from kept modules
    base=max((m['base'] + ((pe_info(m['dll'])['sizeofimage']+SPACING_ALIGN-1)&~(SPACING_ALIGN-1))) for m in keep)
    base=(base+SPACING_ALIGN-1)&~(SPACING_ALIGN-1)
    print("next free base = %#x"%base)

    jobs=[]  # (name, dll, base, outdir, delta, proj, entry)
    for dll in collided_dlls:
        info=pe_info(dll); name=uniq_name(dll)
        outdir=os.path.join(OUTROOT,name); os.makedirs(os.path.join(outdir,'recomp_src'),exist_ok=True)
        siz=(info['sizeofimage']+SPACING_ALIGN-1)&~(SPACING_ALIGN-1)
        this_base=base; base=this_base+siz
        delta=(this_base-info['imagebase'])&0xffffffff
        entry=this_base+info['entry']
        proj=PROJROOT+"_"+name
        JOB_DLL[outdir]=dll
        jobs.append(dict(name=name,dll=dll,base=this_base,outdir=outdir,delta=delta,proj=proj,
                         entry=entry,imagebase=info['imagebase']))
        print("  %-42s base=%#010x <- %s"%(name,this_base,os.path.relpath(dll,GAME)))

    # PHASE 1: Ghidra in parallel
    print("\n=== Ghidra (parallel, %d jobs) ==="%len(jobs))
    def gh(j):
        fpref=os.path.join(j['outdir'],'functions_pref.csv')
        ok=os.path.exists(fpref) or run_ghidra(j['dll'], fpref, j['proj'])
        return (j['name'], ok)
    with ThreadPoolExecutor(max_workers=5) as ex:
        for name,ok in ex.map(gh, jobs):
            print("  ghidra %-42s %s"%(name,"OK" if ok else "FAILED"))

    # PHASE 2: shift + prep + transpile (sequential; fast)
    print("\n=== transpile ===")
    good=[]
    for j in jobs:
        fpref=os.path.join(j['outdir'],'functions_pref.csv')
        if not os.path.exists(fpref): print("  SKIP (no ghidra):",j['name']); continue
        shift_funcs(fpref, j['delta'], os.path.join(j['outdir'],'functions.csv'))
        try:
            transpile(j['outdir'], j['base'])
            good.append(j); print("  done",j['name'])
        except subprocess.CalledProcessError as e:
            print("  TRANSPILE FAILED",j['name'],e)

    # PHASE 3: splice manifest
    for j in good:
        keep.append({'name':j['name'],'dll':j['dll'],'base':j['base'],
                     'entry':j['entry'],'imagebase':j['imagebase']})
    json.dump(keep, open(os.path.join(OUTROOT,'manifest.json'),'w'), indent=1)
    print("\n[finish7] rebuilt %d/%d, manifest now %d modules"%(len(good),len(jobs),len(keep)))
    # drop the 3 old collided dirs (their code was one arbitrary group member)
    for nm in COLLIDED:
        shutil.rmtree(os.path.join(OUTROOT,nm), ignore_errors=True)
    print("[finish7] removed old collided dirs:", sorted(COLLIDED))

if __name__=='__main__': main()
