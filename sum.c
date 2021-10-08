/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//#include <stdio.h>

//int main()
//{
    // char str[May i know your name?]
    // scanf("s" &s)


 //int i;
//  for( i=0; i<=255; i++) {
//      printf("%c=%d\n",i,i);
//  }
//     printf("Hello World");
//char name[30];
//printf("May I know you name? ");
//scanf("%s",name);
//printf("\n\nHello %s, have a great day!!\n\n", name);
  //  return 0;
//}


#include <stdio.h>

void main()
{
    int a,b,c,total;
    float avg;
    scanf("%d%d%d",&a,&b,&c);
    total=a+b+c;
    avg=total/3;
    printf("total=%d,average=%f",total,avg);
}