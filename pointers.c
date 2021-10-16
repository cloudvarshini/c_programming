#include <stdio.h>
#include <stdlib.h>
int main() {
    int *number;
    number=(int*)malloc(1* sizeof(int));
    *number = 57;
    printf("value %d is at address %p\n", *number, number);
    return 0;
}