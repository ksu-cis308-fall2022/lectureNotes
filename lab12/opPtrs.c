#include <stdio.h>

int plus(int a, int b) {
    return a + b;
}

int minus(int a, int b) {
    return a - b;
}

int times(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

typedef int (*optype)(int, int);

//Define doOperations function. Takes three parameters:
    //function pointer to a function that does the operation
        //(that takes two integer arguments and returns an integer result)
    //two integers
//returns result of whatever operation function

int doOperation(optype op, int x, int y) {
    return op(x, y);
}


int main() {
    int num1 = 3;
    int num2 = 4;

    //multiply num1 and num2
    int answer;

    answer = doOperation(times, num1, num2);

    printf("Answer: %d\n", answer);

    //use only the doOperation function

    return 0;
}