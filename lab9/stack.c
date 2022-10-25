#include "types.h"
#include "stack.h"
#include <stdlib.h>

void push(int c, NODE** topPtr) {
    NODE* newnode = malloc(sizeof(NODE));
    newnode->data = c;
    newnode->next = *topPtr;
    *topPtr = newnode;
}

int pop(NODE** topPtr) {
    NODE* temp = *topPtr;
    int val = temp->data;
    *topPtr = (*topPtr)->next;
    free(temp);
    return val;
}