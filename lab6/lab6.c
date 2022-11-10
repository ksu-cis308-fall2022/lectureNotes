#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** doubleLetters(char** wordList, int numWords);

int main() {
    char* test[] = {"ball", "apple", "cat"};

    char** bigger = doubleLetters(test, 3);
        
    for (int i = 0; i < 3; i++) {
        printf("%s\n", bigger[i]);
    }

    return 0;
}

char** doubleLetters(char** wordList, int numWords) {
    char** biggerList = calloc(numWords, sizeof(char*));
    for (int i = 0; i < numWords; i++) {
        biggerList[i] = calloc(2*strlen(wordList[i])+1, sizeof(char));
    }

    for (int i = 0; i < numWords; i++) {
        int j;
        for (int j = 0; j < strlen(wordList[i]); j++) {
            biggerList[i][j] = wordList[i][j];
            biggerList[i][j*2] = wordList[i][j];  
        }
        biggerList[i][strlen(wordList[i])] = '\0';
    }

    return biggerList;
}