# Makefile for 01_block

CC = gcc
FILES = calculatesystemstate.o chartomorse.o createenvironmentdata.o morsetobinary.o  main.o
OUT_EXE = codecool
CFLAGS=-g -I.
DEPS = selfprot.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(FILES)
	$(CC) -o $(OUT_EXE) $^ $(CFLAGS)

clean:
	rm -f *.o core