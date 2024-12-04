/*

 C program to find that a given string is a palindrome or not 
 
 */

#include "stdio.h"
#include "string.h" // include string.h header file to use strlen() and strcmp() functions
 int main()
 {
     char str[8]= "racecar", reversed[8]; // 8 character + 1 null character
        int i,length,j = 0; // i and j are used as index variables and len is used to store the length of the string

        // strten is a function which is used to find the length of the string
        length = strlen(str); // find the length of the string
        for (i = length - 1; i >= 0; i--) {
            reversed[j++] = str[i];
        }
        reversed[j] = '\0'; // now the null character is added at the end of the reversed string
         
         // strcmp() - string compare function is used to compare two strings
        if (strcmp(str, reversed) == 0) {
            printf("Yes.The given string is a palindrome.\n");
        } else {
            printf("No.The given string is not a palindrome.\n");
        }

 }