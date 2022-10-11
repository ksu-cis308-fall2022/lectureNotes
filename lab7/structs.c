#include <stdio.h>
#include <string.h>

struct person {
    char name[30];
    int age;
};

void printperson(struct person p);

struct person birthday(struct person p);

int main() {
    struct person p1;
    strcpy(p1.name, "Bob");
    p1.age = 20;

    //how could we get name/age as user inputs?

    //print p1, make p1 have a birthday, print p1 again;

    printperson(p1);
    p1 = birthday(p1);
    printperson(p1);

    return 0;
}

void printperson(struct person p) {
    //print p's name and age
    printf("Name: %s, age: %d\n", p.name, p.age);
}

struct person birthday(struct person p) {
    //make p be one year older
    p.age++;
    return p;
    //(we will see there is a problem)
}