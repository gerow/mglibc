CC      = clang
CFLAGS = -Iinclude -m32 -nostdlib

all: mg_test

files.o: files.c
	$(CC) $(CFLAGS) -c files.c -o files.o

exit.o: exit.c
	$(CC) $(CFLAGS) -c exit.c -o exit.o

mg_test: main.c files.o exit.o
	$(CC) $(CFLAGS) main.c files.o exit.o -o mg_test

clean:
	rm *.o
	rm mg_test
