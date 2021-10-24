/*Understanding arrays and 
    memory layout */

#include<stdio.h>
int main() {
    char name[10];
    printf("May I know your name? \n");
    scanf("%s",name);
    printf("Nice to meet you %s!\n", name);
    printf("Value of name: %p\n", name);
    int len;
    len = sizeof(name);
    printf("Length of name: %d\n",len);
    printf("Bye ");
    for(int i=0;i<len;i++) {
        if(*(name+i)=='\0') {
            break;
        }
        printf("%c",*(name+i));
    }
    printf("! Have a nice day!\n");
    return 0;
}