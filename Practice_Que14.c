// Print the numbers from 0 to n, if n is given by user

#include<stdio.h>

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int i=0;
    while(i <= n) {
        printf("%d \n", i);
        i++;
    }

    // for(int i=0; i<=n; i++) {
    //     printf("%d \n", i);
    // }

    return 0;
}
