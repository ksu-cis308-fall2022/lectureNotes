#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *head;

void add(int elem);

void printlist(void);

void releasemem(void);

int main() {
    head = NULL;

    //add a few numbers
    //print the list

    return 0;
}

void add(int elem) {
    //add new node with elem to end of head's list
}

void printlist(void) {
    //print head's list
}

void releasemem(void) {
    //release all memory in the list

}