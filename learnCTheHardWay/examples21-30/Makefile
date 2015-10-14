CFLAGS=-Wall -g

all: ex22

clean:
	rm -r *.dSYM
	rm *.o

ex22:
	cc -Wall -g -DNDEBUG -c -o ex22.o ex22.c
	cc -Wall -g -DNDEBUG ex22_main.c ex22.c -o ex22_main
