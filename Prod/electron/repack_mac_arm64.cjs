// repack_mac_arm64.cjs — build the macOS Apple-Silicon (arm64) desktop client, NATIVELY ON WINDOWS.
// Same as buildMac() in repack_mac_linux.cjs but from the darwin-ARM64 Electron zip → a separate
// output Cossacks152-macOS-arm64.zip. The x64 build (Cossacks152-macOS.zip) is left untouched.
// Only the Electron runtime differs by arch; the app JS and dmcr.wasm are arch-independent.
//
// Run:  node repack_mac_arm64.cjs <darwin-arm64.zip>
const yauzl = require('yauzl');
const archiver = require('archiver');
const fs = require('fs');
const path = require('path');

const EL = __dirname;                                   // Prod/electron (app files, icons)
const GAME = path.join(EL, '..', 'game');               // Prod/game (fixed wasm, SVG flags)
const OUT = path.join(EL, '..', 'downloads');
const darwinArmZip = process.argv[2];
if (!darwinArmZip || !fs.existsSync(darwinArmZip)) { console.error('darwin-arm64 zip missing:', darwinArmZip); process.exit(2); }

const S_IFLNK = 0xA000;
function entryMode(en) { return (en.externalFileAttributes >>> 16) & 0xFFFF; }
function isSymlink(en) { return (entryMode(en) & 0xF000) === S_IFLNK; }
function isDir(en) { return /\/$/.test(en.fileName); }

function readEntry(zip, en) {
  return new Promise((res, rej) => {
    zip.openReadStream(en, (e, rs) => {
      if (e) return rej(e);
      const chunks = []; rs.on('data', c => chunks.push(c)); rs.on('end', () => res(Buffer.concat(chunks))); rs.on('error', rej);
    });
  });
}

function copyElectron(zipPath, archive, xform) {
  return new Promise((resolve, reject) => {
    yauzl.open(zipPath, { lazyEntries: true }, (err, zip) => {
      if (err) return reject(err);
      let syms = 0, files = 0;
      zip.on('entry', async (en) => {
        try {
          if (isDir(en)) { zip.readEntry(); return; }
          const t = xform(en.fileName);
          if (!t) { zip.readEntry(); return; }
          const buf = await readEntry(zip, en);
          if (isSymlink(en)) { archive.symlink(t.name, buf.toString('utf8'), t.mode || 0o755); syms++; }
          else { archive.append(buf, { name: t.name, mode: t.mode || (entryMode(en) & 0o7777) || 0o644 }); files++; }
          zip.readEntry();
        } catch (e) { reject(e); }
      });
      zip.on('end', () => { console.log(`   copied ${files} files, ${syms} symlinks from ${path.basename(zipPath)}`); resolve(); });
      zip.on('error', reject);
      zip.readEntry();
    });
  });
}

function addAppFiles(archive, appPrefix) {
  for (const f of ['main.js', 'preload.js', 'lanlink.js', 'package.json', 'icon.png'])
    archive.file(path.join(EL, f), { name: appPrefix + '/' + f });
}

async function buildMacArm() {
  const out = path.join(OUT, 'Cossacks152-macOS-arm64.zip');
  try { fs.unlinkSync(out); } catch (e) {}
  const archive = archiver('zip', { zlib: { level: 5 } });
  const done = new Promise((r, j) => { archive.on('error', j); archive.on('warning', w => console.warn('mac warn', w.message)); });
  const stream = fs.createWriteStream(out);
  const closed = new Promise(r => stream.on('close', r));
  archive.pipe(stream);
  console.log('MAC-arm64: copying Electron.app (symlinks preserved)...');
  await copyElectron(darwinArmZip, archive, (fn) => {
    if (!fn.startsWith('Electron.app/')) return null;
    const rel = fn.slice('Electron.app/'.length);
    if (rel === 'Contents/Resources/default_app.asar') return null;   // replaced by our app
    if (rel === 'Contents/Resources/electron.icns') return null;      // replaced by our icon
    return { name: 'Cossacks152.app/' + rel };
  });
  const APP = 'Cossacks152.app/Contents/Resources/app';
  addAppFiles(archive, APP);
  archive.file(path.join(EL, 'icon.icns'), { name: 'Cossacks152.app/Contents/Resources/electron.icns' });
  archive.file(path.join(EL, 'relay.json.example'), { name: 'Cossacks152.app/Contents/MacOS/relay.json.example' });
  archive.directory(GAME, 'Cossacks152.app/Contents/Resources/web');
  console.log('MAC-arm64: finalizing (streaming game data)...');
  await archive.finalize(); await Promise.race([done, closed]); await closed;
  console.log('MAC-arm64 done: ' + fs.statSync(out).size + ' bytes -> ' + out);
}

buildMacArm().catch(e => { console.error('FATAL', e); process.exit(1); });
