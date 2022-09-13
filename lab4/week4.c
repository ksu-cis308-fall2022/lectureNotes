#include <stdio.h>

void swap(int*, int*);

void printarray(int*, int);

int main() {
    int x = 3;
    int y = 4;
    int nums[] = {1,2,3,4,5,6,7,8,9,10};

    printf("Old values: x = %d, y = %d\n", x, y);

    swap(&x,&y);

    printf("New values: x = %d, y = %d\n", x, y);

    printarray(nums, 10);

    return 0;
}

//this won't work
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printarray(int* nums, int len) {
    int* tempPtr = nums;
    while (tempPtr < nums + len) {
        printf("%d ", *tempPtr);
        tempPtr++;
    }
}

