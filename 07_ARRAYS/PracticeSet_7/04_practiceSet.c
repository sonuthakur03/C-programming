// Repeat problem 3 for a general input provided by the user using scanf.

// Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include <stdio.h>

int main() {
    int produtcs[10], n;

    printf("Enter which multiplication table to print: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        produtcs[i] = (i + 1) * n;
    }

    printf("The table is: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", produtcs[i]);
    }
    
    
    return 0;
}