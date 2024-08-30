// Write a C program to calculate area of a rectangle:
//      a. Using hard coded inputs.
//      b. Using inputs supplied by the user

#include <stdio.h>
#include <conio.h>
int main()
{

    // hardcoded values
    // int length = 5;
    // int breadth = 3;

    // input from user
    int length, breadth;

    printf("Enter the length:");
    scanf("%d", &length);

    printf("Enter the Breadth:");
    scanf("%d", &breadth);

    printf("area of rectangle is %d", length * breadth);
    return 0;
}