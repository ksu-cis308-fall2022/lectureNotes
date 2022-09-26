#include <stdio.h>

int factorial(int x) {
    return x * factorial(x-1);
}

int main() {
    int result = factorial(2);

    printf("Factorial of 2 is: %d\n", result);

    return 0;
}