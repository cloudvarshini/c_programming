#include <stdio.h>
int main ()
{
    int a,b;
    char character;
    printf("character=");
    scanf("%c",&character);
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    switch (character)
    {
        case'a': 
        printf("addition of a&b is %d\n",(a+b));
        break;
        case's': 
        printf("subtraction of a&b is %d\n",(a-b));
        break;
        default:
        printf("enter character a or s\n");
    }
    return 0;
}    