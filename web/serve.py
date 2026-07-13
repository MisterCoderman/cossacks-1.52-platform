#!/usr/bin/env python3
# Static server for the Cossacks WASM build.
# Correct MIME for .wasm/.js, threaded (big wasm+data), range support, no-store (always fresh build).
import http.server, socketserver, os
os.chdir(os.path.dirname(os.path.abspath(__file__)))

class H(http.server.SimpleHTTPRequestHandler):
    extensions_map = {
        **http.server.SimpleHTTPRequestHandler.extensions_map,
        '.js':   'text/javascript',
        '.mjs':  'text/javascript',
        '.wasm': 'application/wasm',
        '.data': 'application/octet-stream',
        '.html': 'text/html',
    }
    def end_headers(self):
        # Unpacked game data never changes -> cache it hard so reloads don't refetch 240 MB.
        # Engine artifacts (dmcr.*) revalidate so a fresh rebuild is picked up (304 if unchanged).
        if self.path.startswith('/data/'):
            self.send_header('Cache-Control', 'public, max-age=31536000, immutable')
        else:
            self.send_header('Cache-Control', 'no-store')  # debug: always fresh engine build
        super().end_headers()
    def log_message(self, fmt, *a):
        pass  # quiet

class S(socketserver.ThreadingMixIn, http.server.HTTPServer):
    daemon_threads = True
    allow_reuse_address = True

if __name__ == '__main__':
    print('Cossacks WASM server: http://localhost:8791/dmcr.html  (dir: %s)' % os.getcwd())
    S(('0.0.0.0', 8791), H).serve_forever()
