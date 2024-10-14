// If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// (i) True.
// (ii) False.
// (iii) Depends.

#include <stdio.h>

int main() {
    int s[3] = {0,1,2};

    printf("The third element is %d\n*(s+3) is %d",s[2], *(s+3) );
    return 0;
}
// (ii) is the right answer because *(s+3) points to the 4th element.
