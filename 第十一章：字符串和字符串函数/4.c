#include <stdio.h>
#define MAX 81

int main(){

    char name[MAX];
    char *ptr;

    printf("Hi, what's your name?\n");
    ptr = gets(name);
    printf("%s? Ah! %s.\n", name, ptr);    

    return 0;
}