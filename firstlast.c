// C program to find sum of first and last digit of a number

#include<stdio.h>
   int main()
   {
      int input,digitfirst,digitlast,i;
               
               printf("Enter a Number :");
               scanf("%d",&input);
             
             digitlast = input % 10;
          while ( input >= 10)
          {
             input = input / 10;
             i = digitfirst + digitlast;

          }
              printf("%d",i);
        return 0;
   } 