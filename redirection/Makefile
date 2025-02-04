CC = gcc
CFLAGS = -Wall -std=c18 -ggdb

test : test_sum test_print

test_sum : sumFromStdIn
	./sumFromStdIn
	./sumFromStdIn < example.txt

test_print : sumFromStdIn printMultiples
	./printMultiples 3 10 | ./sumFromStdIn

clean :
	-rm sumFromStdIn printMultiples
