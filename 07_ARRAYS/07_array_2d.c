#include <stdio.h>

int main() {
    int arr[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value for arr[%d][%d]\n", i,j);
            scanf("%d", &arr[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value for arr[%d][%d] is %d\n", i,j, arr[i][j]);
        }
        
    }
    

    return 0; 
}