#include <stdio.h>

int main() {
    int marks[5];
    printf("Enter the numbers: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %d\nThe value of address is %u\n",i, marks[i], &marks[i]);
    }
    
    return 0; 
}