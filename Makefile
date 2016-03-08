CC          =	gcc
# Flags that are sent to the compiler

CFLAGS      =	-Wall -ansi -pedantic -g

#Directories where the compiler can find things
INCLUDES    = -Iinclude

BINDIR = bin/
SRCDIR = src/

SOURCE = $(SRCDIR)fraction.c $(SRCDIR)main.c

OBJS    = fraction.o main.o

#The names of the binary programs that will be produced.  
PROGNAME = $(BINDIR)mainrunnable


default : labLink

labLink: labCompile
	$(CC) -o $(PROGNAME) $(OBJS)

labCompile: 
	$(CC) $(CFLAGS) -c $(SOURCE) $(INCLUDES)

clean:
	@ rm *.o
	@ rm bin/*

run:
	cd bin; ./mainrunnable