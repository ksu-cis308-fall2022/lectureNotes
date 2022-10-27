//what do we need to include?
#include "types.h"
#include "stack.h"
#include "linkedlist.h"
#include <stdio.h>

int main() {
    //for our stack
    NODE* top = NULL;

    //push 1-5, pop and print all
    for (int i = 1; i <= 5; i++) {
        push(i, &top);
    }
    while (top != NULL) {
        printf("%d\n", pop(&top));
    }


    printf("\n");

    //add 1-10 to a linked list
    NODE* front = NULL;
    for (int i = 1; i <= 10; i++) {
        add(i, &front);
    }

    //print everything in list
    printlist(front);

    //release memory for linked list
    releasemem(front);

    return 0;
}