// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

#include <stdio.h>

int twoSum(int, int, int*);

int twoSum(int x, int y, int* sum){
    *sum = x + y;
}
int twoAverage(int, int, float*);

int twoAverage(int x, int y, float* avg){
    *avg = (x + y)/2;
}

int main() {
    int a = 10, b = 20, sum = 0; float avg = 0;
    int* adSum; 
    int* adAvg;

    adSum = &sum;
    adAvg = &avg;

    twoSum(a,b,&sum);
    twoAverage(a,b,&avg);

    printf("The Sum is %d\n", *adSum);
    printf("The Average is %f", *adAvg);

    return 0; 
}