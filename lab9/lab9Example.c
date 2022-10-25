#include "types.h"
#include "stack.h"
#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    //push 1-5, pop and print all

    NODE* top = NULL;
    for (int i = 1; i <= 5; i++) {
        push(i, &top);
    }

    while (top != NULL) {
        printf("Pop: %d\n", pop(&top));
    }

    //add 1-10 to a linked list
    //print all those, release memory
    NODE* front = NULL;

    //add 1-10
    //print it
    for (int i = 1; i <= 10; i++) {
        add(i, &front);
    }
    printlist(front);
    releasemem(front);

    return 0;
}