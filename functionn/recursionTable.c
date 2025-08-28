// recursion program to print name table of n 

#include <stdio.h>

void number(int s,int m) {
    if (m <=10) {
        printf(" %d * %d : %d\n",s,m,s * m); 
        number(s, m + 1); 
    }
}

int main() {
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    number(n,1);  // function call 
    return 0;
}