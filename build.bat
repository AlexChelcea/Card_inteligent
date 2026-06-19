@echo off
cd /d c:\Users\Alex\Documents\GitHub\Card_inteligent\src
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" x64
cl.exe /Zi /EHsc /nologo /Fe:main.exe main.cpp objects\Elev.cpp objects\Clasa.cpp objects\Materie.cpp objects\Parinte.cpp objects\Profesor.cpp CardInteligent.cpp
