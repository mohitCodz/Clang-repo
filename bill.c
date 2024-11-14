// C program to input electricity unit charges and calculate total electricity bill 

#include <stdio.h>

int main() {
    float u,b;
    printf("Enter total electricity unit consumed : ");
    scanf("%f", &u);
   if (u <= 50) {
        b = u * 0.50;
    } else if (u <= 150) {
        b = (50 * 0.50) + ((u - 50) * 0.75);
    } else if (u <= 250) {
        b = (50 * 0.50) + (100 * 0.75) + ((u - 150) * 1.20);
    } else {
        b = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((u - 250) * 1.50);
        b += 1.25;
    }
    if (u > 250) {
        b = 1.50; 
    } else if (u > 150) {
        b = 1.00; 
    } else if (u > 50) {
        b = 0.75; 
    }

   b = b * 0.20;
    printf("Total electricity bill: Rs. %f", b);

    return 0;
}
