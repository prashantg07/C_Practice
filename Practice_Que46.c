// Ask the user to enter their firstName & print it back to them.
// Also try this with their fullName.

#include<stdio.h>

void printString(char arr[]);

int main() {
    // char firstName[50];
    // scanf("%s", firstName);
    // printf("your name is %s", firstName);

    // char str[100];
    // fgets(str, 100, stdin);
    // puts(str);

    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    return 0;
}

void printString(char arr[]) {
    for(int i=0; arr[i] != '\0' ;i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}