#include <stdio.h>
#define MAX 81

int main(){

    char name[MAX];
    printf("Hi, what's your name?\n");
    gets(name);
    printf("Nice to meet you, %s.\n", name);    

    return 0;
}