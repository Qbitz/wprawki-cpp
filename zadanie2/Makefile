CC=g++
CFLAGS=-Wall -lm

all: clean build run

build: program.o
	$(CC) $(CFLAGS) -o program.out program.o

program.o: program.cpp
	$(CC) $(CFLAGS) -c -o program.o program.cpp 

clean:
	rm program.o
	rm program.out

run:
	./program.out

.PHONY: clean run all
