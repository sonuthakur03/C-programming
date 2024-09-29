#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition

int sum(int x, int y){
//    printf("Sum is %d",x+y);
   return x+y;
}

int main() {
    
    int a=10,b=12;

    printf("Sum is %d",sum(a,b)); // Function call

    return 0; 
}