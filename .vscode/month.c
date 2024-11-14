// C program to input month number and print number of days in that month.

#include <stdio.h>

int main() {
    int m;

    printf("Enter month number (between 1 to 12 ): ");
    scanf("%d", &m);

    if (m == 2) {
        printf("February has 28 days (29 in a leap year)");
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        printf("This month has 30 days");
    }
     else if (m==1 ||  m==3 || m==5  || m== 7 || m== 8 || m== 10 || m == 12 ) {
        printf("This month has 31 days");
     }
else {
        printf("Invalid input (Please enter a number between 1 and 12)");
    }
return 0;
     }