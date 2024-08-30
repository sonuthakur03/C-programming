// Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

#include <stdio.h>
#include <conio.h>
int main()
{
    int radius, height;

    printf("Enter the radius of circle:");
    scanf("%d", &radius);

    printf("Enter the height of cylinder:");
    scanf("%d", &height);

    printf("Area of circle: %.2f \n", 3.14 * radius * radius);
    printf("Area of cylinder: %.2f", 3.14 * radius * radius * height);

    return 0;
}