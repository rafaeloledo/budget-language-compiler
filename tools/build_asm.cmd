@echo off

ml /c /coff /nologo /IC:\masm32\include src\deez-blah.asm 2> nul 1> nul
crinkler.exe /ENTRY:start /SUBSYSTEM:WINDOWS /TINYHEADER /NOINITIALIZERS /UNSAFEIMPORT /ORDERTRIES:2000 /TINYIMPORT /LIBPATH:"C:\Program Files (x86)\Windows Kits\10\Lib\10.0.22621.0\um\x86" user32.lib kernel32.lib deez-blah.obj /OUT:deez-blah.exe > nul
mv deez-blah.exe deez-blah.obj bin > nul
