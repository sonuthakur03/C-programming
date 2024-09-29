#include <stdio.h>

int main() {
    int i = 42;
    int* j = &i;    

    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);

    printf("The value at address j is %d", *(&i));
    return 0; 
}