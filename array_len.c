#include<stdio.h>
int main()
{
    int a[5],len = 0;
    int size_a, size;
    size_a = sizeof(a);
    size = sizeof(a[0]);
    len = sizeof(a)/sizeof(a[0]);
    printf("Size of array a is %d\n",size_a);
    printf("Size of a[0] is %d\n",size);
    printf("length of array a is %d\n",len);
    return 0;
}

