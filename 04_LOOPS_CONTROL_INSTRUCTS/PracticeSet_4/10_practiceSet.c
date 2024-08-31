// Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, prime = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("%d is neither prime nor composite", n);
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                prime++;
            }
        }
        if (!prime)
        {
            printf("%d is a prime number", n);
        }
        else
        {
            printf("%d is a composite number", n);
        }
    }

    return 0;
}