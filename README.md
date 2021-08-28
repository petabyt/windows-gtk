# win32gtk
Compile a GTK 3 app for Windows in 1 line

For the 2013 files, I took some files from an archived [win32builder gtk zip](https://web.archive.org/web/20171023023802if_/http://win32builder.gnome.org/gtk+-bundle_3.10.4-20131202_win64.zip)  
reorganized them to make compilation as straightforward as possible.  

For the 2021 file, I packaged files directly from msys32 repository.  

The newer package looks better (no pixelated fonts, basic looking UI), but  
it is 2mb larger. Choose whatever works for you.  

Unzip `win64-gtk-2021.zip`.

```
x86_64-w64-mingw32-gcc main.c -Iwin32/include win32/lib/* -o test.exe
```

- Note that these files are only for 64 bit Windows.  
- I've only tested it on Windows 7 and 10 (works fine).  

The header files are licenced under the `GNU Lesser General Public License`.  
As far as I can tell, the DLL files are meant to be public domain.  
