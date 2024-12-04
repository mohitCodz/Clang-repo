/* 

C program to find the given number is palindrome or not 

 */

#include "stdio.h"
 int main() {
    int number = 12321, reversed = 0, remainder, original;
    original = number;
    while (number != 0) {
        remainder = number % 10;           
        reversed = reversed * 10 + remainder; 
        number /= 10;                     
    }
    if (original == reversed) {
        printf("Yes.The given number is a palindrome.\n");
    } else {
        printf("No.The given number is not a palindrome.\n");
    }
    return 0;
 }