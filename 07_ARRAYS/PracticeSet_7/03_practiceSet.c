// Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include <stdio.h>

int main() {
    int produtcs[10];

    for (int i = 0; i < 10; i++)
    {
        produtcs[i] = (i + 1) * 5;
    }

    printf("The table is: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", produtcs[i]);
    }
    
    
    return 0;
}