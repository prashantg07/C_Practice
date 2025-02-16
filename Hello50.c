#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);

int main() {
    char firstStr[] = "Apple";
    char secStr[] = "Banana";
    printf("%d \n", strcmp(firstStr, secStr));
}