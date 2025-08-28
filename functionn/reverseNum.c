#include<stdio.h>
void reverse(){

    int i=100;
    while (i>=1)
    {
        printf("%d",i);
        i--;
    }
}
   int main()
   {int a;
   printf("Enter a number :");
   scanf("%d",&a);
   
   int i=a;
   while(i>=1){
    printf("%d\n",i);
    i--;
   }

     reverse();
     return 0;
}