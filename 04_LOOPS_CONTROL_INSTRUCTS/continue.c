#include <stdio.h>
#include <conio.h>
int main()
{
    int skip = 5;
    for (int i = 0; i < 10; i++)
    {
        if (i == skip)
        {
            continue; // exits the iteration when continue is executed
        }
        printf("%d\n", i);
    }

    return 0;
}