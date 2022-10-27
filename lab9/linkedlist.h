#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "types.h"

//linked list prototypes

void add(int elem, NODE** head);

void printlist(NODE* head);

void releasemem(NODE* head);

#endif