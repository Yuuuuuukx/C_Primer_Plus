#include <stdio.h>
#include <string.h>

#define SIZE 81
#define LIM  100
#define STOP "quit"

int main(){

    char input[SIZE][LIM];
    int cnt = 0;
    while(cnt < SIZE && gets(input[cnt]) != NULL && strcmp(input[cnt], STOP)){
        cnt++;
    }
    printf("%d strings has entered.\n", cnt);
    return 0;
}