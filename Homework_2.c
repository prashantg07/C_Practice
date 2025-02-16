// Take a number(n) from user & output its cube(n*n*n).

#include<stdio.h>

int main() {
    // Print the cube of the number
    int n, cube;
    printf("Enter the number : ");
    scanf("%d", &n);
    cube = (n * n* n);
    printf("The cube of the number is : %d ", cube);

    return 0;
}