//C program to check whether a number is Strong number or not.

#include<stdio.h>
   int main()
   {
     int number,original,sum=0,store;

         printf("Enter a number :");
         scanf("%d",&number);

         if (number<0)
         {
            printf(" Invalid input. Please enter  a vlaid input ");
         }
             original = number;

             while (number>0)
             {
               store = number % 10;
               int factorial = 1;
               int newstorage = store;
                 while (newstorage > 1)
                 {
                 factorial = factorial * newstorage;
                 newstorage--;
                 }
                 
                 sum = sum + factorial;
                 number = number / 10;
             }
             if (sum == original)
             {
             printf("Yes entered number %d is a strong number ",original);
             }
             else
             {
              printf("No entered number %d is not a strong number ",original);
             }
             return 0;
   }