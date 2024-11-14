//C program to find all factors of a number(using while loop)

#include <stdio.h>

int main() {
    int input, i=1;

    printf("Enter a number: ");
    scanf("%d", &input);
    
    while ( i <= input) {
        if (input % i == 0) { 
            printf("%d ", i);
        }
         i++;
    }
    return 0;
}