CC = gcc
CFLAGS = -g -Wall
EXE = lab9test
HEADERS = types.h linkedlist.h stack.h
CODE = linkedlist.c stack.c lab9Example.c

OBJECTS = $(CODE:.c=.o)

lab9: $(OBJECTS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXE)

clean:
	rm -f *.o *.exe *.out