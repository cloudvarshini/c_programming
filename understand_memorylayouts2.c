#include<stdio.h>

int a;
int b=0;
static int g=0;

int count(){
    b++;
    return b;
}

int static_count() {
    static int c=-1;
    c++;
    count();
    return c;
}
void welcome() {
    printf("Hello world\n");
    static_count();
    //count();
}

int main() {
    int e;
    int f=12;
    welcome();
    welcome();
    printf("Welcome has been called according to static_count function: %d\n", static_count());
    printf("Welcome has been called according to count function: %d\n",  count());
    return 0;
}
