#include <stdio.h>

int fibonacci(int);

int fibonacci(int n){
    if(n<=2){
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
    int n = 5;
    printf("THe value of fibonacci series ar %d is %d", n, fibonacci(n));
    
    return 0; 
}