#include <stdio.h>

int count_letter(char str[], char letter);

//Thursday, September 1
int main() {
    int nums[5];
    printf("%d\n", nums[100000]);

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