// Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user

#include <stdio.h>
#include <conio.h>
int main()
{
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is leap year", year);
            }
            else
            {
                printf("%d is not leap year", year);
            }
        }
        else
        {
            printf("%d is leap year", year);
        }
    }
    else
    {
        printf("%d is not leap year", year);
    }

    return 0;
}