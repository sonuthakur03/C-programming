#include <stdio.h>

void good_morning();
void good_afternoon();
void good_night();

void good_morning(){
    printf("Good morning\n");
}
void good_afternoon(){
    printf("Good afternoon\n");
}
void good_night(){
    printf("Good night");
}

int main() {
    good_morning();
    good_afternoon();
    good_night();
    return 0; 
}