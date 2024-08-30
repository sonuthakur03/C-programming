// Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.

#include <stdio.h>
#include <conio.h>
int main()
{
    int principal, time, rate;

    printf("enter principal:");
    scanf("%d", &principal);

    printf("enter time:");
    scanf("%d", &time);

    printf("enter rate:");
    scanf("%d", &rate);

    int SI = (principal * time * rate) / 100;

    printf("Simple Interest is : %d", SI);

    return 0;
}