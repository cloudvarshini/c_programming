#include<stdio.h>

int *a;

void count(int *a){
    (*a)++;
}

void static_count() {
    static int c=0;
    if(c == 0) {
        a = &c;
    }
    count(&c);
}

void welcome() {
    printf("Hello world\n");
    static_count();
}

int main() {
    welcome();
    welcome();
    printf("Welcome has been called %d times\n",  *a);
    return 0;
}