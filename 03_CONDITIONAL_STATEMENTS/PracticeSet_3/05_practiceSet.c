// Write a program to determine whether a character entered by the user is lowercase or not

#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("%c is lowercase", ch);
    }
    else
    {
        printf("%c is uppercase", ch);
    }

    return 0;
}