CC = gcc
CFLAGS = -g -Wall
EXE = lab9test
HEADERS = types.h stack.h linkedlist.h
CODE = stack.c linkedlist.c lab9Example.c

OBJECTS = $(CODE:.c=.o)

lab9: $(OBJECTS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXE)

clean:
	rm -f *.o *.exe *.out