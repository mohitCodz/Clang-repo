// recursion program to print name 10 times 

#include <stdio.h>

void Name(int count) {
    if (count == 10) {
       return;
    }
      printf("Mohit\n"); 
      count++;
      Name(count);
}