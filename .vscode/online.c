// Online C compiler to run C program online
#include <stdio.h>

int main() {
      int age,legalage;
      
      printf("enter your age :");
      scanf("%d",&age);
      
      if ( age < 18)
      { 
          printf("Sorry ! you are not elegible to get your driving licence :(");
      }
       else if ( age >= 18)
       {
           printf("Congratulations !!!!\n. You are elegible for driving licence ");
       }

    return 0;
}