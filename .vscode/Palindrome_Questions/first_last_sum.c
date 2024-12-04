/*

C program to find sum of first and last digit of the given number 

*/

#include "stdio.h"
 int main() {
    int number = 2345, sum = 0, first_num, last_num;
    last_num = number % 10; // it will give the last digit of the number
    while (number != 0) {
        first_num = number % 10;  // it will give the first digit of the number          
        number /= 10;                     
    }
    sum = first_num + last_num;
    printf("Sum of first and last digit is : %d\n", sum);
    return 0;
 }