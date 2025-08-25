// adding the pointer
#include <stdio.h>
int main() {
  int a = 101;
  int b = 201;
  int c = 301;
  int d = 401;
  int e = 501;
  int *ptr1 = &a;
  int *ptr2 = &b;
  int *ptr3 = &c;
  int *ptr4 = &d;
  int *ptr5 = &e;
  printf("%d + %d + %d + %d + %d = %d\n", *ptr1, *ptr2, *ptr3, *ptr4, *ptr5, *ptr1 + *ptr2 + *ptr3 + *ptr4 + *ptr5);
  return 0;
}
