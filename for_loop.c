#include<stdio.h>
int main ()
{
    int n,sum=0,i;
    printf("n = ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        //sum = sum + i;
        sum += i;
    }
    printf("Sum of first %d numbers is %d\n",n,sum);
    return 0;
}