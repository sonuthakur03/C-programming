// Repeat problem 7 for a custom input given by the user.

#include <stdio.h>

int main() {
    int arr[3][10], num[3];

    printf("Enter which number's table to print\n");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = num[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}