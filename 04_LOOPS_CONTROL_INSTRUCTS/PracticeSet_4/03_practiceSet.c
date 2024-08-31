// A do while loop is executed:
// a. At least once. true
// b. At least twice. false
// c. At most once. false

#include <stdio.h>

int main()
{
    int n = 0;
    do
    {
        printf("Condition is false still it ran one time");
    } while (n == 1);

    return 0;
}