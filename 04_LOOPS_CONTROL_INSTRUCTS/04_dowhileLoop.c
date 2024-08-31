// Write a program to print first ‘n’ natural number using do-while loop

#include <stdio.h>

int main()
{
    int i = 1, n;

    printf("Enter how many to print: ");
    scanf("%d", &n);

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}