#include<stdio.h>
//declaration/prototype
void printHello();

int main() {
    printHello(); //function call
    printHello();
    printHello();
    return 0;
}

//function defination
void printHello() {
    printf("Hello! \n");
    printf("My name is Prashant \n");
}