// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?

#include <stdio.h>

void printAddress(int* i);

void printAddress(int* i){
    printf("The address of i inside sub-function is: %p",i);
}
int main() {
    int i;
    int* ad;
    ad = &i;

    printf("Address of I in main function: %p\n", ad);
    printAddress(&i);
    return 0; 
}