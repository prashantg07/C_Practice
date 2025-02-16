#include<stdio.h>
#include<math.h>

int main() {
    int isSunday = 0;
    int isSnowing = 1;
    printf("%d \n", isSunday && isSnowing);

    int isMonday = 0;
    int isRaining = 1;
    printf("%d \n", isMonday || isRaining);

    int x;
    printf("enter number : ");
    scanf("%d", &x);
    printf("%d \n", x>9 && x<100);
    
    return 0;
}