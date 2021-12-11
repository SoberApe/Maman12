#magic makefile:

magic: magic.o check.o prompt.o
	gcc -g -Wall -ansi -pedantic check.o prompt.o magic.o  -o magic

magic.o: magic.c check.o prompt.o
	gcc -c -g -Wall -ansi -pedantic magic.c  -o magic.o

check.o: check.c
	gcc -c -g -Wall -ansi -pedantic check.c -o check.o

prompt.o: prompt.c
	gcc -c -g -Wall -ansi -pedantic prompt.c -o prompt.o
