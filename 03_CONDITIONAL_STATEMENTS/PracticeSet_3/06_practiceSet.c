// Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>
#include <conio.h>
int main()
{
    int n1, n2, n3, n4;
    printf("Enter 1st number: ");
    scanf("%d", &n1);
    printf("Enter 2nd number: ");
    scanf("%d", &n2);
    printf("Enter 3rd number: ");
    scanf("%d", &n3);
    printf("Enter 4th number: ");
    scanf("%d", &n4);

    if (n1 > n2 && n1 > n3 && n1 > n4)
    {
        printf("%d is largest", n1);
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4)
    {
        printf("%d is largest", n2);
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4)
    {
        printf("%d is largest", n3);
    }
    else
    {
        printf("%d is largest", n4);
    }

    return 0;
}