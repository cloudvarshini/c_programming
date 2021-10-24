#include <stdio.h>
int main ()
{
    int a,b;
    char character;
    char name[10];
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("character=");
    scanf(" %c",&character);
    //scanf("%c",&character);
    //scanf(" %c",&name);
    //printf("%d '%c'\n",character,character);
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