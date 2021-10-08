#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swaping,a=%d,b=%d\n",a,b);
return 0;
}