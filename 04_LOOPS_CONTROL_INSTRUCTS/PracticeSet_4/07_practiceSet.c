// Write a program to calculate the sum of the numbers occurring in the multiplication table of 8. (consider 8 x 1 to 8 x 10).

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        sum = sum + (n * i);
    }
    printf("Sum of multiplication number is: %d", sum);

    return 0;
}