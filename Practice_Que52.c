// Check if a given character is present in a string or not.

#include<stdio.h>
#include<string.h>

void checkChar(char str[], char ch);

int main() {
    char str[] = "ApnaCollege";
    char ch = 'e';
    checkChar(str, ch);
}

void checkChar(char str[], char ch) {
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("character is present!");
            return;
        }
    }
    printf("character is NOT present:(");
}