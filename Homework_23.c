// Write a program to print the highest frequency
// character in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char inputString[1000];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int frequency[256] = {0}; // Assuming extended ASCII characters

    for (int i = 0; inputString[i] != '\0'; i++) {
        unsigned char currentChar = (unsigned char)inputString[i];
        frequency[currentChar]++;
    }

    char highestFrequencyChar = 0;
    int maxFrequency = 0;

    for (int i = 0; i < 256; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            highestFrequencyChar = (char)i;
        }
    }

    printf("Character with the highest frequency: '%c'\n", highestFrequencyChar);
    printf("Frequency: %d times\n", maxFrequency);

    return 0;
}
