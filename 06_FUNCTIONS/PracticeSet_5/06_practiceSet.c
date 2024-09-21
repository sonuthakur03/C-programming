#include <stdio.h>

int sumNatural(int);

int sumNatural(int a){
    if (a == 1)
    {
        return 1;
    }
   return sumNatural(a-1) + a;    
}

int main() {
    
    printf("Sum of natural numbers are: %d", sumNatural(5));
    return 0; 
}