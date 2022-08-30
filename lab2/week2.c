#include <stdio.h>

int count_letter(char str[], char letter);

//Tuesday, August 30
int main() {
    int test[10];

    printf("%d\n", test[10000]);

    return 0;
}

int count_letter(char str[], char letter) {
    int count = 0;
    int pos = 0;
    while (str[pos] != '\0') {
        if (str[pos] == letter) {
            count++;
        }
        pos++;
    }

    return count;
}

