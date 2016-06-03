CC=g++
CFLAGS=-Wall
DEPS = calc.h
OBJ = program.o calc.o


all: clean build run

build: $(OBJ)
	gcc -o program.out $^ $(CFLAGS)

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm *.o
	rm *.out

run:
	./program.out

.PHONY: clean run all
