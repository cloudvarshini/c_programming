//Identify the problem and fix in below programs:


#include <stdio.h>

int main() {
  int n=57;  
  int*number;
  number=&n;
  printf("value %d is at address %p\n", *number, number);
  return 0;
}