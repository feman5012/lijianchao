# Makefile for executable stacktest

# *****************************************************
# Parameters to control Makefile operation

CC = gcc
CFLAGS = -ansi -pedantic -Wall -g


# ****************************************************
# Entries to bring the executable up to date

main: main.o chain.o
	$(CC) $(CFLAGS) -o main main.o chain.o

main.o: main.c chain.h
	$(CC) $(CFLAGS) -c main.c

chain.o: chain.c chain.h
	$(CC) $(CFLAGS) -c chain.c
