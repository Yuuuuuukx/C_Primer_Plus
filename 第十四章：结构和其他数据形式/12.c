#include <stdio.h>

union hold{
    int a;
    int b;
    int c;
};

int main(){

    union hold value;
    value.a = 100;

    printf("%d.\n", value.b);
    printf("%d.\n", value.c);
    value.b = 200;
    printf("%d.\n", value.a);

    return 0;
}