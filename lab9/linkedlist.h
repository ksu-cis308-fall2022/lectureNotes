#ifndef LIST_H
#define LIST_H

#include "types.h"

void add(int elem, NODE** head);

void printlist(NODE* head);

void releasemem(NODE* head);

#endif