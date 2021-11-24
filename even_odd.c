#include <stdio.h>
void even()
    {
        char name[30];
        printf("Enter your name: ");
        scanf("%s",name);
        printf("%s\n",name);
        printf("%s\n",name);
    }
void odd()
    {
        char name[30];
        printf("Enter your name: ");
        scanf("%s",name);
        printf("%s\n",name);
    }
int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number%2 == 0)
    {
        even();
    }
    else
    {
        odd();
    }
    
    return 0;
}