/* Using do-while loop or (exit control loop) 
find factorial for given input */ 

#include <stdio.h>
int main ()
{
    int a,fact = 1;
    printf("a = ");
    scanf("%d",&a);
    do
    {
        fact = fact * a;
        a--;
    }
    while (a>1);
    if (fact == 0)
    {
        printf("Factorial is 1\n");
    }
    else
    printf("Factorial is %d\n",fact);
    return 0;
}

/* OUTPUT:

a = 4
Factorial is 24 */
