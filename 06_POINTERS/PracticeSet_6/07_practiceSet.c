// Try problem 3 using call by value and verify that it does not change the value of the said variable.

#include <stdio.h>

int multiplyBytenTimes(int);

int multiplyBytenTimes(int a){
    a = a * 10;
    return 0;
}

int main() {
    int num = 5;
    printf("The value of number before 10 times is %d\n", num);
    multiplyBytenTimes(num); // VALUE DOESNOT CHANGE 
    printf("The value of number after 10 times is %d", num);
    return 0; 
}