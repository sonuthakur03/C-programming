// What will the following line produce in a C program:
// int a = 4;
// printf("%d %d %d \n", a, ++a, a++);

#include <stdio.h>

int main() {
    int a = 4;
    printf("%d %d %d", a,++a, a++);

    // right to left is evaluation order(default)
    return 0; 
}