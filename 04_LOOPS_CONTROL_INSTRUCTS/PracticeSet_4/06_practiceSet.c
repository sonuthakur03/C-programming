// Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

#include <stdio.h>
#include <conio.h>
int main()
{
    int sum = 0, i = 1;

    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("Sum of 10 natural number using for is: %d", sum);

    sum = 0;
    i = 1;

    do
    {
        sum = sum + i;
        i++;
    } while (i <= 10);
    printf("\nSum of 10 natural number using do while is: %d", sum);

    return 0;
}