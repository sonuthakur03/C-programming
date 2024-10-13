#include <stdio.h>

int main()
{
    int marks[] = {12, 34, 56, 78};

    // int* ptr = &marks[0]; same as below
    int *ptr = marks;

    for (int i = 0; i < 4; i++)
    {
        // printf("The value of marks at index %d is %d\n", i, marks[i]);
        printf("The value of marks at index %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}