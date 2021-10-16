#include<stdio.h>
#include<stdlib.h>
int *a;

void count(){
    (*a)++;
}


void static_count() {
     count();
}

void welcome() {
    printf("Hello world\n");
    static_count();
}

int main() {
    a=(int*)malloc(1* sizeof(int));
    welcome();
    welcome();
    printf("Welcome has been called %d times\n",  *a);
    return 0;
}