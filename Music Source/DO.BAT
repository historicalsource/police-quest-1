del %1
readmidi %1.1
pause
readmidi %1.2
pause
readmidi %1.3
convmidi %1 3
ren output %1
play %1 -2
play %1 -3
play %1
copy %1.* b:
