#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i == 5)
        {
            printf("%d is here\n", i);
            break; // exits the loops when break is executed
        }
        printf("%d\n", i);
    }

    return 0;
}