// Write a program in C to print all the letters in english
// alphabet using a pointer

#include<stdio.h>

int main() {
    char alph[27];
    int i;
    char *ptr;
    printf("\n\n Pointer : Print all the alphabets:\n");
    printf("----------------------------------------\n");
    ptr = alph;
    for(i = 0; i < 26; i++) {
        *ptr = i + 'A';
        ptr++;
    }
    ptr = alph;
    printf(" The Alphabets are : \n");
    for(i = 0; i < 26; i++) {
        printf(" %c ", *ptr);
        ptr++;
    }
    printf("\n\n");
    return 0;
}