#include "stdio.h"

 int main()
    {
        
         int arr[5] = {1, 2, 3, 4, 5}; // aray of element 5
          arr[2] = 4;
          int target = 4;

          int index = 2;
          for (int i = 0; i < 5; i++) // binary search pattren
        {
             if (arr[i] == target) // slective statement
             {
                printf("Element found at index %d\n", i);
                break;  // exit the loop
             }
        }
        
    }