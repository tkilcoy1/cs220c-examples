CC = gcc
CFLAGS = -std=c18 -Wall -ggdb
A = 2
B = 3

test : arithTest
	./arithTest $A $B

arithTest : arithTest.c arith.c arith.h
	${CC} arithTest.c arith.c -o arithTest ${CFLAGS}

clean :
	-rm arithTest
