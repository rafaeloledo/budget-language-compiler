.386
.model flat, stdcall
option casemap:none

include user32.inc
include windows.inc
include kernel32.inc

.data
  szText db 'Hello, World!', 0

.code
  start:
    invoke MessageBox, NULL, offset szText, NULL, MB_OK
    invoke ExitProcess, NULL
  end start
