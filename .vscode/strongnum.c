#include<stdio.h>
int main(){
  int num;
  printf("Enter the number : ");
  scanf("%d",&num);
  
  // The reason for storing the same number is we will change the num as per requirement.
  int originalNumber = num;
  int val = 0;
  int sum = 0;
  while(num > 0){
    int fact = 1;

    // Here this logic is to extract unit place number
    val = num % 10;
    num = num / 10;

    // Here this logic is to find the factorial of that number
    for(int i = 1; i<=val;i++){
      fact = fact * i;
    }
    
    // After finding the factorial of any number we will add this number in diffrent sum;
    sum = sum + fact;
  }

  if(sum == originalNumber){
    printf("It is a Strong Number : ");
  }
  else{
    printf("It is not a Strong Number :");
  }

  return 0;
}