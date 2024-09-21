#include <stdio.h>

// Function prototype
int change(int);

// Function definition

int change(int x){
    x = 77;
}

int main() {
    
    int c = 12;
    change(c); // Function call
    printf("c is %d",c); // value of c doesnt change but the valur is copied to change function

    return 0; 
}