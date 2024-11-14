#include <stdio.h>

int main() {
    int n;

   
    printf("Enter a Number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
       
    }
    while (n > 0) {
        printf("%d\n", n);
        n -= 2; 
    }

    return 0;
}
