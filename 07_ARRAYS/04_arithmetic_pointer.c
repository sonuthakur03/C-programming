#include <stdio.h>

int main() {
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n", ptr);
    printf("The address of a is %u\n", &a);
    ptr++;
    printf("The value of ptr is %u", ptr);
    return 0; 
}