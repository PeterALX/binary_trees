SRC = main.c 0-binary_tree_node.c binary_tree_print.c

all: main

main: $(SRC) binary_trees.h
	gcc $(SRC) -o main
	./main

play: playground.c
	gcc playground.c -o play
	./play
