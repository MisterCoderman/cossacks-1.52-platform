# start_master.ps1 — launch the Cossacks WASM master (static + WS relay + IRC chat + GSC bridge).
#
# The GSC internet lobby is served by the native rloger Perl server (SimpleCossacksServer) running
# as the `gscserver` systemd service inside WSL2/Ubuntu on TCP 34001. WSL2 localhost forwarding is
# unreliable for this port, and the WSL IP changes across reboots, so we resolve it live and pass it
# to the bridge as GSC_HOST. In a real Linux production deploy the master and the Perl server sit on
# one host and GSC_HOST just stays 127.0.0.1 (this script is only for the local Windows+WSL setup).

$ErrorActionPreference = 'Stop'
$node = "C:\node\bin\node.exe"
$master = "C:\cossacks_wasm\server\cos_master.js"

# Keep the WSL VM alive (it otherwise shuts down when idle, taking the server with it) and make
# sure the GSC server is up. With mirrored networking (.wslconfig networkingMode=mirrored +
# vmIdleTimeout=-1) the server is reachable on plain localhost, no WSL-IP juggling needed.
wsl.exe -d Ubuntu-24.04 -u root -e bash -lc 'systemctl is-active --quiet gscserver || systemctl start gscserver' | Out-Null
# background keepalive so the VM never idles out
Start-Process -FilePath 'wsl.exe' -ArgumentList '-d','Ubuntu-24.04','-u','root','-e','sleep','2147483647' -WindowStyle Hidden
$wslip = '127.0.0.1'
Write-Host "GSC backend at ${wslip}:34001 (mirrored networking)"

# kill any old master
Get-CimInstance Win32_Process -Filter "Name='node.exe'" |
  Where-Object { $_.CommandLine -match 'cos_master\.js' } |
  ForEach-Object { Stop-Process -Id $_.ProcessId -Force -Confirm:$false }
Start-Sleep -Seconds 1

$env:GSC_HOST = $wslip
Start-Process -FilePath $node -ArgumentList $master, '8790', '8792' -WindowStyle Hidden
Start-Sleep -Seconds 2
try {
  $s = (Invoke-WebRequest -Uri http://127.0.0.1:8790/status -UseBasicParsing).Content
  Write-Host "master up: $s"
} catch {
  Write-Host "master failed to start: $_"
}
