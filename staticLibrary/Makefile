# Makefile for first ststic library

binary: main.o libworld.a
	gcc -o binary main.o -L. -lworld
main.o: main.c
	gcc -c main.c
libworld.a : a_world.o b_world.o
	ar cr libworld.a a_world.o b_world.o
a_world.o : a_world.c
	gcc -c a_world.c
b_world.o : b_world.c
	gcc -c b_world.c

clean: 
	rm -f *.o *.a binary