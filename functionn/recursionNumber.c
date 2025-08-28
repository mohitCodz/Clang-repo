// recursion program to print number in reverse and vice versa from 1-10 

#include <stdio.h>

void number(int s) {
    if (s > 0) {
        printf("%d\n",s); // this will print in reverse
        number(s - 1); 
        printf("%d\n",s); // this will print in order 
    }
}

int main() {
    number(10);  // function call 
    return 0;
}