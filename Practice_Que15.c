// print the sum of first n natural numbers.
// n = 4
// also, print them in reverse.

#include<stdio.h>

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int sum = 0;
    for(int j=n; j>=1; j--) {
        sum = sum + j; //sum += j
        printf("%d \n", j);
    }

    printf("sum is %d \n", sum);

    return 0;
}