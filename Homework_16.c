// Write a program in C to find the maximum number
// between two numbers using a pointer.

#include<stdio.h>

int main() {
    int a, b;
    int *ptr = &a;
    int *ptr1 = &b;
    printf("Enter a number : ");
    scanf("%d", ptr);
    printf("Enter another number : ");
    scanf("%d", ptr1);
    if(*ptr > *ptr1) {
        printf("%d is the maximum number ", *ptr);
    }
    else {
        printf("%d is the maximum number ", *ptr1);
    }

    return 0;
}