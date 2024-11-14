// c program to find odd number

#include<stdio.h>
int main()
{
  int n;
   do
   {
     printf("enter a number :");
    scanf("%d",&n);
    printf("%d\n",n);

    if (n % 2 != 0)
    {
      break;
    }
    
   } while (1);
     printf("great you found an odd number !");
    return 0;
}