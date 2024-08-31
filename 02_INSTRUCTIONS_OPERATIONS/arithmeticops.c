#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("enter two number: \n");
    scanf("%d %d", &a, &b);

    printf("Sum is %d:\n", a + b);
    printf("Diff is %d:\n", a - b);
    printf("Product is %d:\n", a * b);
    printf("Division is %d:\n", a / b);
    printf("Remainder is %d:\n ", a % b);
    return 0;
}