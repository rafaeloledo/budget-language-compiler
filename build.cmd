ml /c /coff /IC:\masm32\include .\deez-blah.asm
crinkler.exe /ENTRY:start /SUBSYSTEM:WINDOWS /TINYHEADER /NOINITIALIZERS /UNSAFEIMPORT /ORDERTRIES:2000 /TINYIMPORT /LIBPATH:"C:\Program Files (x86)\Windows Kits\10\Lib\10.0.22621.0\um\x86" user32.lib kernel32.lib deez-blah.obj /OUT:deez-blah.exe
