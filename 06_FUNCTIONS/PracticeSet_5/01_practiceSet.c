#include <stdio.h>

float avg(int , int, int);

float avg(int a , int b, int c){
    return (a+b+c)/3.0;
}
int main() {
    
    int a = 10 , b = 15, c = 5;

    printf("Average is %.2f",avg(a,b,c));
    return 0; 
}