// c program for printing hollow sphere 
#include<stdio.h>
   int main()
   {
      int input;
      printf("Enter a number :");
      scanf("%d",&input);
       
       for (int i = 0 ; i < input; i++)
       {
         for (int j = 0; j < input; j++)
         {
          if (i == 0  || i == input - 1 || j == 0 || j == input - 1)
          {
            printf("%d",i);
          }
           else {
            printf(" ");
           }
         }
          printf("\n");
       }
     }