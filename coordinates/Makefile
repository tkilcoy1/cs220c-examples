CC = gcc
CFLAGS = -Wall -std=c18 -ggdb

test : coordTest
	./coordTest 21 90

coordTest : coordTest.c coord.c coord.h
	$(CC) -o coordTest coordTest.c coord.c $(CFLAGS)

clean :
	-rm coordTest
