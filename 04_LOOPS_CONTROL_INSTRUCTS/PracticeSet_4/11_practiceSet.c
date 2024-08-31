// Implement 10 using other types of loops.

#include <stdio.h>
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
        // USING DOWHILE LOOP
        // int i = 2;
        // do
        // {
        //     if (n % i == 0)
        //     {
        //         prime++;
        //     }
        //     i++;
        // } while (i <= n / 2);

        // USING WHILE LOOP
        int i = 2;
        while (i <= n / 2)
        {
            if (n % i == 0)
            {
                prime++;
            }
            i++;
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