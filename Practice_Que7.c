#include<stdio.h>
#include<math.h>

int main() {
    //valid
    printf("%d", 8^8);

    //valid
    int x; int y = x;

    //invalid
    int x, y = x;

    //invalid
    char stars = '**';
    
    return 0;
}