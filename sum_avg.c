//Find the sum and average of three numbers
#include <stdio.h>
int main()
{
    int a,b,c,total;
    float avg;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    total=a+b+c;
    avg=total/3;
    printf("total=%d,average=%f\n",total,avg);
    return 0;
}