#include <stdio.h>

int main() {
    int num = 4;
    void* ptr = &num;

    //how to initialize ptr to point to num?

    //how to print num using ptr?
    printf("%d\n", *((int*)ptr));


    char* str = "hello";
    ptr = str;

    printf("%c\n", ((char*)(ptr))[0]);
    
    //make ptr point to hello

    //use ptr to print the "h"

    return 0;
}