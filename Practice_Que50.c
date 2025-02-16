// Write a function named slice, which takes a string & returns a sliced string from index n to m.

#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLength(char arr[]);
void salting(char password[]);
void slice(char str[], int n, int m);

int main() {
    char str[] = "HelloWorld";
    slice(str, 3, 6);
}

void slice(char str[], int n, int m) { // n & m are valid values
    char newStr[100];
    int j = 0;
    for(int i=n; i<=m; i++, j++) {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}


void salting(char password[]) {
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password); // newPass = "test"
    strcat(newPass, salt); // newPass = "test" + "123";
    puts(newPass);
}
