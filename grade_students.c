#include<stdio.h>
int main ()
{
    int mark;
    printf("Enter the mark scored by students : ");
    scanf("%d",&mark);
    if (mark >= 90)
    {
    printf("Your grade is O.\n");
    }
    else if ( mark >= 80 && mark <= 89)
    {
    printf("Your grade is A+.\n");
    }
    else if ( mark >= 70 && mark <= 79)
    {
    printf("your grade is A.\n");
    }
    else if ( mark >= 60 && mark <= 69)
    {
    printf("your grade is B.\n");
    }
    else if ( mark >= 50 && mark <= 59)
    {
        printf("your grade is C.\n");
    }    
    else
    {
        printf("You are Re-Appear.\n");
    }
    return 0;

}