// Write a program to print the value of a variable i by using “pointer to pointer” type of variable.

#include <stdio.h>

int main() {
    int i = 5;
    int* ad;
    int** ad2ad;

    ad = &i;
    ad2ad = &ad;

    printf("The value of i is: %d\n", **(&ad));
    printf("The value of i is: %d", **ad2ad);
    return 0; 
}