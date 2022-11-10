#include <stdio.h>

void printarray(int* nums, int len);

int main() {
    int test[] = {1,2,3,4,5};
    printarray(test, sizeof(test)/sizeof(int));

    return 0;
}

void printarray(int* nums, int len) {
    int* ptr = nums;
    while (ptr < nums + len) {
        printf("%d\n", *ptr);
        ptr = ptr + 1;
    }
}