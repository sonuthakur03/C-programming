// What will be the output of this program
// int a = 10;
// if (a = 11)
// printf("I am 11");
// else
// printf("I am not 11");

#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 10;
    if (a = 11) // a gets overwritten as = is assign operator not equal
    {
        printf("I am 11");
    }
    else
    {
        printf("I am not 11");
    }

    return 0;
}