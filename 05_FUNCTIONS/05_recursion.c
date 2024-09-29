#include <stdio.h>

int factorial(int);

int factorial(int a){
    if (a<=0)
    {
        return 1;
    }
    
    return factorial(a-1) * a;
}

int main() {
    
    int a = 3;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0; 
}