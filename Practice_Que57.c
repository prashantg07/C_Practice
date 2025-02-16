// Make a structure to store Bank Account Information of a customer of ABC Bank Also, make an alias for it.

#include<stdio.h>
#include<string.h>

typedef struct BankAccount {
    int accountNo;
    char name[100];
} acc;

int main () {
    acc acc1 = {123, "Prashant"};
    acc acc2 = {124, "Vishal"};
    acc acc3 = {125, "Avishek"};

    printf("acc no = %d \n", acc1.accountNo);
    printf("name = %s \n", acc1.name);
    return 0;
}
