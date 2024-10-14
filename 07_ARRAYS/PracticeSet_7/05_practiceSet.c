// Write a program containing a function which reverses the array passed to it.

#include <stdio.h>

void reverseArray(int arr[], int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, len);
    printf("\n");
    printf("Reversed Array\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
