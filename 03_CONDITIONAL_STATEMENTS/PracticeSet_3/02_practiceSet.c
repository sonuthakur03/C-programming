// Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.

#include <stdio.h>
#include <conio.h>
int main()
{
    int marks1, marks2, marks3, avg = 0;

    printf("Enter marks1\n");
    scanf("%d", &marks1);

    printf("Enter marks2\n");
    scanf("%d", &marks2);

    printf("Enter marks3\n");
    scanf("%d", &marks3);

    avg = (marks1 + marks2 + marks3) / 3;

    if (marks1 <= 33 || marks2 <= 33 || marks3 <= 33)
    {
        printf("Student is fail in individual subject");
    }
    else if (avg <= 40)
    {
        printf("Student is fail in average subject");
    }
    else
    {
        printf("Student is Pass");
    }

    return 0;
}