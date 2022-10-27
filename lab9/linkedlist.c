#include "types.h"
#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

//linked list implementations

void add(int elem, NODE** headptr) {
    //add new node with elem to end of head's list
    NODE* newnode = malloc(sizeof(NODE));
    newnode->data = elem;
    newnode->next = NULL;

    //is the list empty?
    if (*headptr == NULL) {
        *headptr = newnode;
    }
    else {
        NODE* temp = *headptr;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        //temp is the last node
        temp->next = newnode;
    }

    //need to find the end
}

void printlist(NODE* head) {
    //print all data in my head linked list 
    NODE* temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void releasemem(NODE* head) {
    //release all memory in the list
    NODE* temp = head;
    while (temp != NULL) {
        NODE* next = temp->next;
        free(temp);
        temp = next;
    }
}