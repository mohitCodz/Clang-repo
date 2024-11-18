// c program to find profit and loss 

#include <stdio.h>

int main() {
    float cp, sp, pl;

    printf("Enter the Cost price: ");
    scanf("%f", &cp);
    printf("Enter the Selling price: ");
    scanf("%f", &sp);

    pl= sp - cp;

    if (pl > 0) {
        printf("Profit of rs : %f", pl);
    } else if (pl < 0) {
        printf("Loss of rs : %f",pl);
    } else {
        printf("There is No profit & no loss.");
    }

    return 0; 
}