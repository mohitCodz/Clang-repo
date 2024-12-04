/*

C program to reverse the given number 

*/


#include "stdio.h"

int main() {
    int number = 1234, reversed = 0, remainder;

    
    while (number != 0) {
        remainder = number % 10;           
        reversed = reversed * 10 + remainder; 
        number /= 10;                     
    }

    printf("Reversed number is : %d\n", reversed);

    return 0;
}
