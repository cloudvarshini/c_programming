#include <stdio.h>
int main ()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if (marks>=91&&marks<=100)
    {
        printf("you are scored 'O' grade\n");
    }
    else if (marks>=81&&marks<=90)
    {
        printf("you are scored 'A+' grade\n");
    }
    else if (marks>=71&&marks<=80) 
    {
        printf("you are scored 'A' grade\n");
    }
    else if (marks>=61&&marks<=70)
    {
        printf("you are scored 'B+' grade\n");
    }
    else if (marks>=50&&marks<=60)
    {
        printf("you are scored 'B' grade\n");
    }
    else
    {
        printf("Sorry you are fail\n");
    }
}
    