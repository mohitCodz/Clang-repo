// C program to count number of digits in a number.

#include<stdio.h>
  int main()
  {
     int n,i=0;

     printf("Enter a Number :");
     scanf("%d",&n);

     while (n != 0)
     {
        i++;
        n = n / 10;
     }
      printf("Total numbers of digits are : %d",i);
  }