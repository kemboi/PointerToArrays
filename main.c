#include <stdio.h>

int main(void) {
  printf("A pointer to an array\n");
  int arr = {1,6,7,10,5}; // array declaration
  int *ptr=&arr; // pointer to an array
  printf("This size of pointer to array is : %lu bytes", sizeof(*ptr));
    
  return 0;
}