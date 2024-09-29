// Call by Reference

#include <stdio.h>

int sum(int*, int*);

int sum(int* a, int* b){

    *a = 7;
    *b = 6;
    return *a+*b;
}

int main() {

    int x = 6, y = 7;
    printf("The sum of x and y is %d", sum(&x,&y));
    return 0; 
}