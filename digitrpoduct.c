// C program to calculate product of digits of a number


#include<stdio.h>
   int main()
   {
      int input,i=1;
             printf("Enter a number :");
             scanf("%d",&input);

              while (input != 0)
              {
                int store = input % 10;
                 i = i * store;

                input = input / 10;
              }
                 printf("%d",i); 
              
        } 