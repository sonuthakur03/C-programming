// Write a program containing functions which counts the number of positive integers in an array.

#include <stdio.h>

int positiveInt(int arr [],int  len){
    int c = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > 0)
        {
            c++;
            printf("%d ", arr[i]);
        }
    }
    return c;
}

int main() {
    int arr[] = {-1,-2,0,1,2};
    int len = sizeof(arr) / sizeof(arr[0]);

    int count = positiveInt(arr, len);

    printf("\nThe number of positive integars is %d", count);
    return 0;
}