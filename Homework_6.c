// Write a program to print the smallest number of two.

#include<stdio.h> 

int main() {
    // print the smallest number of two
    int a, b;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter another number : ");
    scanf("%d", &b);
    if (a > b) {
        printf("%d is the smallest number", b);
    }
    else {
        printf("%d is the smallest number", a);
    }

    return 0;

}