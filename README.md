# win32gtk
Compile a GTK 3 app for Windows in 1 line, from Linux.  
(or from Windows, it might work there too)

1. Unzip `win64-gtk-2021.zip`.

```
x86_64-w64-mingw32-gcc main.c -Iwin32/include win32/lib/* -o test.exe
# test.exe will require all DLLs in win32/lib. You can store them all
# in a zip file or create an installer that will put them in system32.
```

For the 2013 files, I took some files from an archived [win32builder gtk zip](https://web.archive.org/web/20171023023802if_/http://win32builder.gnome.org/gtk+-bundle_3.10.4-20131202_win64.zip)  
reorganized them to make compilation as straightforward as possible.  

For the 2021 file, I packaged files directly from msys32 repository.  
It looks better (no pixelated fonts, better looking theme), but  
it is 2mb larger. Choose whatever works for you.  

- Note that these files are only for 64 bit Windows.  
- I've only tested it on Windows 7 and 10 (works fine).  

The header files and DLL files are licenced under the `GNU Lesser General Public License`.  
