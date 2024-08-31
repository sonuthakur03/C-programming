// Repeat 8 using while loop.

#include <stdio.h>
#include <conio.h>
int main()
{
    int fact = 1, n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (n == 0)
        {
            printf("Factorial is: %d", fact);
            break;
        }

        fact = fact * i;
        i++;
    }

    printf("Factorial is: %d", fact);
    return 0;
}