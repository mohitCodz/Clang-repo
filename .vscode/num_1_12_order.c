/*

It will print a half pyramid in 1 then 12 then 123 order ( input by user )

*/

#include<stdio.h>
    int main(){
        int n;
        printf("Enter the Number : ");
        scanf("%d",&n);
        for(int i = 1; i<n; i++){
            for(int j =1; j<=i; j++){
                printf("%d ",j);
            }
            printf("\n");
        }
        return 0;
    }