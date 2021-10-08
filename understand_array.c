#include<stdio.h>
void greeting() {
    printf("Hello world");
}
int main()
{
    char name[13];
    name = "Megavarshini";
    printf("%s\n",name);
    int i;
    for(i=0;i<13;i++) {
        printf("%d. %c = %d\n", i, name[i],name[i]);
    }
} 