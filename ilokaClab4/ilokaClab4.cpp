// ilokaClab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//no42 lab4

#include <iostream>

#include <stdio.h>

int main() {
    char text[1000];
    int line_count = 0;
    int word_count = 0;
    int i, j;

    printf("Enter the text:\n");
    fgets(text, sizeof(text), stdin);

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            line_count++;
            // Reset word_count after each line
            word_count = 0;
        }

        if (line_count == 2) {
            if (text[i] == ' ' || text[i] == '\n' || text[i] == '\0') {
                if (i > 0 && (text[i - 1] == 'c' || text[i - 1] == 'C')) {
                    word_count++;
                }
            }
        }
    }

    printf("Number of words ending with 'c' in the second line: %d\n", word_count);

    return 0;
}