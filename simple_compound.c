#include<stdio.h>
#include<math.h>
void main()
{
    float p,r,t,n;
    float si,ci;
    scanf("%f%f%f%f",&p,&r,&t,&n);
    si=((p*r*t)/100);
    ci=(p*(pow((1+(r/(n*100))),(n*t)))-p);
    printf("si=%f",si);
    printf("ci=%f",ci);
}
