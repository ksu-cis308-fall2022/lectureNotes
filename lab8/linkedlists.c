#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} NODE;

void add(int elem, NODE** headptr);

void printlist(NODE* head);

void releasemem(NODE* head);

int main() {
    NODE* head = NULL;

    //add 1-4
    //print it

    for (int i = 1; i <= 4; i++) {
        add(i, &head);
    }

    printlist(head);
    releasemem(head);

    return 0;
}

void add(int elem, NODE** headptr) {
    //add new node with elem to end of head's list
    NODE* newnode = malloc(sizeof(NODE));
    newnode->data = elem;
    newnode->next = NULL;

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
}

void printlist(NODE* head) {
    //print head's list
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
        NODE* after = temp->next;
        free(temp);
        temp = after;
    }
}