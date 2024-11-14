// C program to print all natural numbers in reverse (from n to 1). – using while loop


#include<stdio.h>
int main()
{
   int a;
   printf("Enter a number :");
   scanf("%d",&a);
   
   int i=a;
   while(i>=1){
    printf("%d\n",i);
    i--;
   }

return 0;
}