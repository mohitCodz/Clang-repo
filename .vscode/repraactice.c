// C program to print name ( taking input by user )

 #include <stdio.h>

int main() {
    char ch; 
    int times; // how many times you want to display your name 

    printf("Enter your name: ");
    scanf("%s",&ch); 

    printf("Enter how many times to print your name: ");
    scanf("%d", &times); 

    for (int i = 0; i < times; i++) {
        printf("%c\n", ch); 
    }

    return 0;
}
