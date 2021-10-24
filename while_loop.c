#include <stdio.h>
int main ()
{
    int n,i=1,sum=0;
    printf("n = ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum = sum + i;
        i++;
    }
    printf("sum of first %d number is %d\n",n,sum);
    return 0;
}