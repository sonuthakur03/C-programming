// Write a function and pass the value by reference.

#include <stdio.h>

int passValue(int*);
int passValue(int* val){
    printf("Value passed by refrence is %d", *val);
}

int main() {
    int a = 10;
    int* ad;
    ad = &a;

    passValue(&a);
    return 0; 
}