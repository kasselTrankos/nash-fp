CC=g++
CFLAGS=-std=c++14

isnash: isnash.c
	$(CC) $(CFLAGS) isnash.c -o main
	./main