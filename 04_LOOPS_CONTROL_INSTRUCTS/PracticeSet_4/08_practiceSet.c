// Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>
#include <conio.h>
int main()
{
    int fact = 1, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n == 0)
        {
            printf("Factorial is: %d", fact);
            break;
        }

        fact = fact * i;
    }

    printf("Factorial is: %d", fact);
    return 0;
}