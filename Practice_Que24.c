// Write 2 functions - one to print "Hello" & second to print "good bye".

#include<stdio.h>
//declaration/prototype
void printHello();
void printGoodbye();

int main() {
    printHello(); //function call
    printGoodbye();
    return 0;
}

//function defination
void printHello() {
    printf("Hello! \n");
}

void printGoodbye() {
    printf("Goodbye:) \n");
}