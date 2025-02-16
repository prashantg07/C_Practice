// Write a function to print "Hot" or "Cold" depending
// on the temperature user enters.

#include<stdio.h>

int main() {
    float temperature;
    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    if(temperature > 30) {
        printf("Hot\n");
    }
    else {
        printf("Cold\n");
    }

    return 0;
}