// Write a program to change the value of a variable to ten times of its current value

#include <stdio.h>

int multiplyBytenTimes(int*);

int multiplyBytenTimes(int* a){
    *a = *(a) * 10;
    return 0;
}

int main() {
    int num = 5;
    printf("The value of number before 10 times is %d\n", num);
    multiplyBytenTimes(&num);
    printf("The value of number after 10 times is %d", num);
    return 0; 
}