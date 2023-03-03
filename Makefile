SRC = *.c 
CC = gcc -Wall -pedantic -Werror -Wextra -std=gnu89

all: main

main: $(SRC) binary_trees.h
	$(CC) $(SRC) -o main
	./main

play: playground.c
	gcc playground.c -o play
	./play
