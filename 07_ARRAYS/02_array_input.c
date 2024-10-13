#include <stdio.h>

int main() {
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %d\n",i, marks[i]);
    }
    

    // marks[0] = 45;
    // marks[1] = 95;

    // printf("The marks of first and second are : %d %d", marks[0],marks[1]);
    return 0; 
}