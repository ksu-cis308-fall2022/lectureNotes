#include <stdio.h>

int main() {
    int num = 4;
    void* ptr = &num;

    //how to initialize ptr to point to num?

    //how to print num using ptr?
    printf("%d\n", *((int*)ptr));

    return 0;
}