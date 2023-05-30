# Linux targets:
test.o: test.c ui.h
	$(CC) test.c $(shell pkg-config --libs gtk+-3.0 --cflags) -o test.o

# Convert test.ui into binary header file
ui.h: test.ui
	xxd -i test.ui > ui.h

# Windows targets:
test.exe: win32 ui.h
	x86_64-w64-mingw32-gcc test.c -Iwin32/include win32/lib/* -o test.exe

# Compile a complete directory with all the necessary DLLs
output: test.exe
	-rm -rf output; mkdir output
	cp win32/lib/* output/
	cp test.exe output/

win32:
	wget -4 https://github.com/petabyt/windows-gtk/raw/master/win64-gtk-2021.zip
	unzip *.zip
	rm -rf *.zip

clean:
	rm -rf *.o *.out *.exe ui.h win32 output

help:
	echo "make test.o"
	echo "make output"
	echo "make clean"

.PHONY: clean
