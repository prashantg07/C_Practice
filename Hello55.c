#include<stdio.h>
#include<string.h>

//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main() {
    struct student s1 = {1664, 9.2, "prashant"};
    printInfo(s1);

    s1.roll =1660; 
    printf("student.roll = %d \n", s1.roll);

    return 0;
}

void printInfo(struct student s1) {
    printf("student information : \n");
    printf("student.roll = %d \n", s1.roll);  
    printf("student.name = %s \n", s1.name);
    printf("student.cgpa = %f \n", s1.cgpa); 
}