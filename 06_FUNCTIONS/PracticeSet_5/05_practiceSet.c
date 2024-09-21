#include <stdio.h>

int main() {
    int a = 4;
    printf("%d %d %d", a,++a, a++);

    // right to left is evaluation order(default)
    return 0; 
}