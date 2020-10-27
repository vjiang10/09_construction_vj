all: main.o construction.o
	gcc -o construction main.o construction.o

construction.o: construction.c construction.h
	gcc -c construction.c 

main.o: main.c construction.h
	gcc -c main.c

clean:
	rm *.o

run: construction
	./construction