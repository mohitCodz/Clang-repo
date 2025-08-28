// C program to find odd number (using function)

#include <stdio.h>
int odd(int n) {
    int s = 0;
    for (int i = 1; i <= n; i += 2) {
        printf("%d \n", i);
        s++;
    }
    printf(" \n");
    return s;
}

int main() {
    int n;
    int s;
    printf("Enter a number: ");
    scanf("%d", &n);

    s = odd(n);
    printf("Total odd numbers are : %d\n", s);

    return 0;
}
