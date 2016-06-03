CC=g++
CFLAGS=-Wall

all: clean build run

build: program.o
	$(CC) $(CFLAGS) -o program.out program.o

program.o: program.cpp
	$(CC) $(CFLAGS) -c -o program.o program.cpp 

clean:
	rm program.o
	rm program.out

run:
	./program.out "Damiana Łoboda" Krakusa

.PHONY: clean run all
