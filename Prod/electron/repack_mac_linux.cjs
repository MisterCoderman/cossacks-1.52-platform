// repack_mac_linux.cjs — build the macOS (.app zip, symlinks preserved) and Linux (.tar.gz, exec
// bits set) desktop clients NATIVELY ON WINDOWS, no WSL. yauzl reads the official Electron zip;
// archiver writes the new archive, carrying symlink entries (mac framework) and Unix mode bits
// (linux exec) as ARCHIVE METADATA — nothing is materialized on the Windows filesystem, so no
// symlink/permission support is needed. Same fixed app (new preload.js) + game (SVG flags) go in.
//
// Run:  node repack_mac_linux.cjs <darwin.zip> <linux.zip>
const yauzl = require('yauzl');
const archiver = require('archiver');
const fs = require('fs');
const path = require('path');

const EL = __dirname;                                   // Prod/electron (app files, icons)
const GAME = path.join(EL, '..', 'game');               // Prod/game (fixed, SVG flags)
const OUT = path.join(EL, '..', 'downloads');
const darwinZip = process.argv[2];
const linuxZip  = process.argv[3];

const S_IFLNK = 0xA000;
function entryMode(en){ return (en.externalFileAttributes >>> 16) & 0xFFFF; }
function isSymlink(en){ return (entryMode(en) & 0xF000) === S_IFLNK; }
function isDir(en){ return /\/$/.test(en.fileName); }

function readEntry(zip, en){
  return new Promise((res, rej)=>{
    zip.openReadStream(en, (e, rs)=>{
      if (e) return rej(e);
      const chunks=[]; rs.on('data',c=>chunks.push(c)); rs.on('end',()=>res(Buffer.concat(chunks))); rs.on('error',rej);
    });
  });
}

// Copy every entry of an Electron zip into `archive`, transforming path/mode. `xform(fileName)` ->
// { name, mode } or null to skip. Symlinks are re-emitted as symlink entries.
function copyElectron(zipPath, archive, xform){
  return new Promise((resolve, reject)=>{
    yauzl.open(zipPath, { lazyEntries:true }, (err, zip)=>{
      if (err) return reject(err);
      let syms=0, files=0;
      zip.on('entry', async (en)=>{
        try {
          if (isDir(en)) { zip.readEntry(); return; }
          const t = xform(en.fileName);
          if (!t) { zip.readEntry(); return; }
          const buf = await readEntry(zip, en);
          if (isSymlink(en)) { archive.symlink(t.name, buf.toString('utf8'), t.mode || 0o755); syms++; }
          else { archive.append(buf, { name: t.name, mode: t.mode || (entryMode(en) & 0o7777) || 0o644 }); files++; }
          zip.readEntry();
        } catch(e){ reject(e); }
      });
      zip.on('end', ()=>{ console.log(`   copied ${files} files, ${syms} symlinks from ${path.basename(zipPath)}`); resolve(); });
      zip.on('error', reject);
      zip.readEntry();
    });
  });
}

function addAppFiles(archive, appPrefix){
  for (const f of ['main.js','preload.js','lanlink.js','package.json','icon.png'])
    archive.file(path.join(EL, f), { name: appPrefix + '/' + f });
}

async function buildMac(){
  const out = path.join(OUT, 'Cossacks152-macOS.zip');
  try { fs.unlinkSync(out); } catch(e){}
  const archive = archiver('zip', { zlib:{ level:5 } });
  const done = new Promise((r,j)=>{ archive.on('error',j); archive.on('warning',w=>console.warn('mac warn',w.message)); });
  const stream = fs.createWriteStream(out);
  const closed = new Promise(r=> stream.on('close', r));
  archive.pipe(stream);
  console.log('MAC: copying Electron.app (symlinks preserved)...');
  await copyElectron(darwinZip, archive, (fn)=>{
    if (!fn.startsWith('Electron.app/')) return null;
    const rel = fn.slice('Electron.app/'.length);
    if (rel === 'Contents/Resources/default_app.asar') return null;   // replaced by our app
    if (rel === 'Contents/Resources/electron.icns') return null;      // replaced by our icon
    return { name: 'Cossacks152.app/' + rel };
  });
  // our app + game + icon + relay
  const APP = 'Cossacks152.app/Contents/Resources/app';
  addAppFiles(archive, APP);
  archive.file(path.join(EL,'icon.icns'), { name:'Cossacks152.app/Contents/Resources/electron.icns' });
  archive.file(path.join(EL,'relay.json.example'), { name:'Cossacks152.app/Contents/MacOS/relay.json.example' });
  archive.directory(GAME, 'Cossacks152.app/Contents/Resources/web');
  console.log('MAC: finalizing (streaming game data)...');
  await archive.finalize(); await Promise.race([done, closed]); await closed;
  console.log('MAC done: ' + fs.statSync(out).size + ' bytes -> ' + out);
}

async function buildLinux(){
  const out = path.join(OUT, 'Cossacks152-Linux.tar.gz');
  try { fs.unlinkSync(out); } catch(e){}
  const archive = archiver('tar', { gzip:true, gzipOptions:{ level:5 } });
  const done = new Promise((r,j)=>{ archive.on('error',j); archive.on('warning',w=>console.warn('linux warn',w.message)); });
  const stream = fs.createWriteStream(out);
  const closed = new Promise(r=> stream.on('close', r));
  archive.pipe(stream);
  const P = 'Cossacks152-Linux/';
  console.log('LINUX: copying electron (exec bits set)...');
  await copyElectron(linuxZip, archive, (fn)=>{
    if (fn === 'resources/default_app.asar') return null;             // replaced by our app
    let name = fn, mode;
    if (fn === 'electron') { name = 'cossacks152'; mode = 0o755; }    // the launcher
    else if (fn === 'chrome-sandbox' || fn === 'chrome_crashpad_handler') mode = 0o755;
    return { name: P + name, mode };
  });
  const APP = P + 'resources/app';
  addAppFiles(archive, APP);
  archive.file(path.join(EL,'relay.json.example'), { name: P + 'relay.json.example' });
  archive.append('Run ./cossacks152  (chmod +x if your unzip dropped it).\nInternet play: copy relay.json.example -> relay.json and set your server.\n', { name: P + 'HOWTO.txt', mode: 0o644 });
  archive.directory(GAME, P + 'resources/web');
  console.log('LINUX: finalizing (streaming game data)...');
  await archive.finalize(); await Promise.race([done, closed]); await closed;
  console.log('LINUX done: ' + fs.statSync(out).size + ' bytes -> ' + out);
}

(async ()=>{
  await buildMac();
  await buildLinux();
  console.log('ALL DONE');
})().catch(e=>{ console.error('FATAL', e); process.exit(1); });
