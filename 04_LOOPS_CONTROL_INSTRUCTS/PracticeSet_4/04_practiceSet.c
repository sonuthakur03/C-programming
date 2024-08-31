// What can be done using one type of loop can also be done using the other twotypes of loops – true or false?
// -True

#include <stdio.h>

int main()
{
    int i;

    // Numbers printing using for
    printf("Numbers printing using for\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    i = 0;
    // Numbers printing using while
    printf("Numbers printing using while\n");
    while (i < 10)
    {
        printf("%d\n", i);
        i++;
    }

    i = 0;
    // Numbers printing using do while
    printf("Numbers printing using dowhile\n");
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 10);

    return 0;
}