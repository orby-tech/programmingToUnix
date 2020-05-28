# Makefile for couple Hello world


hello: helloWorld.o anowerFileHello.o
	gcc -o hello helloWorld.o anowerFileHello.o

helloWorld.o: helloWorld.c
	gcc -c helloWorld.c

anowerFileHello.o: anowerFileHello.c
	gcc -c anowerFileHello.c

clean: 
	rm -f *.o hello