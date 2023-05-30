# windows-gtk
Compile a GTK 3 app for Windows in 1 line.

This acts as a modern replacement for win32builder.gnome.org,  
which went down sometime in 2018. I created it while working on  
the [mlinstall](https://github.com/petabyt/mlinstall/) project.  

See `example/` for a quick example.  
You can compile it with this one liner:  
```
x86_64-w64-mingw32-gcc main.c -Iwin32/include win32/lib/* -o test.exe
```

# Files

| Zip File | Description |
| - | - |
| win64-gtk-2013.zip | 2013 Binaries, pixelated font, from archived win32builder |
| win64-gtk-2021.zip | 2021 Binaries directly from msys32 repository. Looks more modern. |
| win32-gtk-2013.zip | 2013 Binaries, from [win32builder archive](https://web.archive.org/web/20141228094243/http://win32builder.gnome.org/gtk+-bundle_3.10.4-20131202_win32.zip). 32 bit. Works on ReactOS. |

# Notes
- I've tested it on Windows 7/10/XP and ReactOS, and it works great.  

# Legal Stuff

The header files and DLL files are licenced under the `GNU Lesser General Public License`.  
main.c is licensed under the `MIT license`.  

For the 2013 files, I took some files from an archived [win32builder gtk zip](https://web.archive.org/web/20171023023802if_/http://win32builder.gnome.org/gtk+-bundle_3.10.4-20131202_win64.zip)  
reorganized them to make compilation as straightforward as possible.  

For 2021 files, I downloaded gtk3 from the Msys2 repository:  
https://packages.msys2.org/package/mingw-w64-x86_64-gtk3
