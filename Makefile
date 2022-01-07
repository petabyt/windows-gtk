CC=x86_64-w64-mingw32

output: test.exe
	-rm -rf output; mkdir output
	cp win32/lib/* output/
	cp test.exe output/

test.exe: win32
	$(CC)-gcc main.c -Iwin32/include win32/lib/* -o test.exe

# Download remote gtk file
win32:
	wget -4 https://github.com/petabyt/windows-gtk/raw/master/win64-gtk-2021-min.zip
	unzip *.zip
	rm -rf *.zip
	
