// Keep taking numbers as input from user until user enters a number which is multiply of 7.

#include<stdio.h>

int main() {
    int n;
    do {
        printf("enter number : ");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 7 == 0) { //multiple of 7
            break;
        }

    } while(1);
    printf("thank you \n");

    return 0;

}