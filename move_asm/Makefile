CC = gcc
CFLAGS = -std=c18 -Wall -ggdb

test : main
	./main

main : main.c asm.s
	${CC} -o main main.c asm.s ${CFLAGS} -z noexecstack

clean :
	-rm main
