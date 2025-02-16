#include<stdio.h>
#include<string.h>

//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1 = {1664, 9.2, "prashant"};
    printf("student roll = %d \n", s1.roll);

    //pointer to structures
    struct student *ptr = &s1;
    printf("student.roll with ptr = %d \n",(*ptr).roll);

    //Arrow Operator
    printf("student->roll = %d \n", ptr->roll);  
    printf("student->name = %s \n", ptr->name);
    printf("student->cgpa = %f \n", ptr->cgpa);
    return 0;
}

