// Write a function to calculate Percentage of a student from Marks in Science, Math & Sanskrit.

#include<stdio.h>

int calcPercentage(int science, int math, int sanskrit);
int main() {
    int science = 98;
    int math = 95;
    int sanskrit = 99;

    printf("percentage is : %d", calcPercentage(science, math, sanskrit));
    return 0;
}

int calcPercentage(int science, int math, int sanskrit) {
    return((science + math + sanskrit) / 3);
}