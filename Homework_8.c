// Write a program to check if the given number is a
// natural number.
// (Natural numbers start from 1)

#include<stdio.h>

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if(n >= 1 && (n != 0 || n < 0)) {
        printf("It is a natural number ");
    }
    else {
        printf("It is not a natural number ");
    }

    return 0;
}