// Write a function to find sum of digits of a number.

#include<stdio.h>

int sum(int a, int b);
int main() {
    int a , b , c;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    c = sum(a,b);
    printf("The sum of your two entered number is : %d ",c);
    return 0;
}
int sum(int a, int b) {
    return a + b;
}