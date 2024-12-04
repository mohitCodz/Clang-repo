/*

C program to find the sum of given digits

*/

#include "stdio.h"
int main() {
    int number = 1234, sum = 0, remainder;
    while (number != 0) {
        remainder = number % 10;           
        sum += remainder; 
        number /= 10;                     
    }
    printf("Sum of digits is : %d\n", sum);
    return 0;
}