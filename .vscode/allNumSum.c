#include<stdio.h>

int main()
 {
      int input,sum = 0;

      printf("Enter a number :");
      scanf("%d",&input);

      while (input>0)
      {
         sum =sum + (input % 10);
         input = input/10;

          
      }
      
          printf("Sum is : %d",sum);
  

 }