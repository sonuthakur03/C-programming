// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

#include <stdio.h>

int main() {
    int arr[10] = {1,2,3,4,5,6,8,9,10};
    int* ptr = arr;

    printf("The third element is %d\n", arr[2]);
    printf("The third element using pointer arithmetic is %d", *(ptr+2));

    return 0; 
}