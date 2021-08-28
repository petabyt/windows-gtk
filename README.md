# win32gtk
Compile a GTK 3 app for Windows in 1 line

I took some files from an archived [win32builder gtk link](https://web.archive.org/web/20171023023802if_/http://win32builder.gnome.org/gtk+-bundle_3.10.4-20131202_win64.zip)  
reorganized them to make compilation as straightforward as possible.  

You will have to unzip win32.zip first.  

```
x86_64-w64-mingw32-gcc main.c -Iwin32/include win32/lib/* -o test.exe
```

- Note that these files are only for 64 bit Windows.  
- I've only tested it on Windows 7 and 10 (works fine).  
