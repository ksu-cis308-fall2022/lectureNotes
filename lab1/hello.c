//Hello, world goes here
#include <stdio.h>

double area(double);

int main() {
    printf("Hello, world!\n");

    double answer = area(3.5);

    return 0;
}

double area(double rad) {
    return rad*rad*3.14;
}