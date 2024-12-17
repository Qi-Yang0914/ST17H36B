$pythonPath = Get-Command -Name python -ErrorAction SilentlyContinue | Select-Object -ExpandProperty Path
$pipPath = Get-Command -Name pip -ErrorAction SilentlyContinue | Select-Object -ExpandProperty Path

if ($pythonPath) {
    Write-Host "pip is installed at: $pipPath"
    Start-Process "pip" -ArgumentList "install", "-r ./requirements.txt" -Wait -NoNewWindow


} else {
    Write-Host "Python is not installed."
    Write-Host "Please install python first"
}