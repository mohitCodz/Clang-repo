#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    for(int i =0; i<n; i++){
        for( int j =(i+j)%2==0; j>0; j--){
            printf("  ");
        }
        for(int k = 0; k<=i; k++){
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}