#include<stdio.h>
#include<conio.h>
int main(){
    
    // hardcoded values 
    // int length = 5;
    // int breadth = 3;
    
    // input from user
    int length, breadth;

    printf("Enter the length:");
    scanf("%d", &length);
   
    printf("Enter the Breadth:");
    scanf("%d", &breadth);


    printf("area of rectangle is %d", length*breadth);
    return 0;
}