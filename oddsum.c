//C program to find sum of all odd numbers between 1 to n 

#include <stdio.h>

int main() {
    int n, s = 0, i = 1; 
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a valid input ");
    }
      while (i <= n) {
        if (i % 2 != 0) { 
            s = s + i; 
        }
        i++;
    }

    printf("The sum of all odd numbers between 1 and %d is: %d\n", n, s);
    return 0;
}
