// Write a program to print the address of a variable. Use this address to get the value of the variable.

#include <stdio.h>

int main()
{

    int n = 4;
    int *address;
    address = &n;

    printf("Address of the value is: %u\n", address);
    printf("Value of the value is: %d", *address);

    return 0;
}