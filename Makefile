CC = x86_64-w64-mingw32

all:
	$(CC)-gcc main.c -Iwin32/include win32/lib/* -o test.exe
	rm -rf output; mkdir output
	cp win32/lib/* output/
	cp test.exe output/
	
