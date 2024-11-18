// C program to print abcd chart from the entered alphabet by user ( lowercase or uppercase ) 

#include <stdio.h>

int main() {
    char in;

    printf("Enter an Alphabet (a-z or A-Z): ");
    scanf(" %c", &in);

    if ((in < 'a' || in > 'z') && (in < 'A' || in > 'Z')) {
        printf("Invalid input. Please enter an alphabet between a-z or A-Z.\n");
    } 
    
    else if (in >= 'a' && in <= 'z') {
        char ch = in; 
        while (ch <= 'z') {
            printf("%c\n", ch);
            ch++;
        }
    } 
    else if (in >= 'A' && in <= 'Z') {
        char ch = in; 
        while (ch <= 'Z') {
            printf("%c\n", ch);
            ch++;
        }
    }

    return 0; 
}
