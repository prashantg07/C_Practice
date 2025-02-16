#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);

int main() {
    char firstStr[100] = "Hello ";
    char secString[] = "World";
    strcat(firstStr, secString);
    puts(firstStr);
}