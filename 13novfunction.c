#include<stdio.h>
 // below is function defination
 int add(int a, int b) // paremeter
  {
    int sum;
    sum = a +b;
    return sum;
  }
    // below is 
    int main()
    {
        int sum;
        sum = add(2,5); // argument
         printf("%d",sum);
    }