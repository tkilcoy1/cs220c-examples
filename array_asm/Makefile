CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : testSum
	./testSum

testSum : testSum.c sum.s
	${CC} -o testSum testSum.c sum.s ${CFLAGS} -z noexecstack

clean :
	-rm testSum
