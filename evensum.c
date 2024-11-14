//C program to find sum of all even numbers between 1 to n 

#include <stdio.h>

int main() {
    int n, s = 0, i = 2; // variable decleration


    printf("Enter a number : ");   // taking input by user
    scanf("%d", &n);

    if (n <= 0) {  // if statement 
        printf("Invalid input. Please enter a valid input ");
    }

    // while loop  
      while (i <= n) {
        if (i % 2 == 0) { 
            s = s + i; 
        }
        i++;
    }

    printf("The sum of all even numbers between 1 and %d is: %d\n", n, s);
    return 0;
}
