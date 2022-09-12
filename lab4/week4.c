#include <stdio.h>

void swap(int, int);

void printarray(int*, int);

int main() {
    int x = 3;
    int y = 4;

    printf("Old values: x = %d, y = %d\n", x, y);

    swap(x, y);

    printf("New values: x = %d, y = %d\n", x, y);

    return 0;
}

//this won't work
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void printarray(int* nums, int len) {

}

