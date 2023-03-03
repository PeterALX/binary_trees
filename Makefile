SRC = *.c 

all: main

main: $(SRC) binary_trees.h
	gcc $(SRC) -o main
	./main

play: playground.c
	gcc playground.c -o play
	./play
