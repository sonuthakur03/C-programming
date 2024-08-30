// Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).

#include <stdio.h>
#include <conio.h>
int main()
{
    float celsius, farenhit;

    printf("enter celsius:");
    scanf("%f", &celsius);

    farenhit = (celsius * 9 / 5) + 32;

    printf("Farenhit is: %f", farenhit);

    return 0;
}