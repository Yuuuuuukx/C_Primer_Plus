#include <stdio.h>
#include <string.h>
#define SIZE 30
#define BUGSIZE 13

int main(){

    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int avaliable;

    puts("What is your favourite flower?");
    gets(flower);
    if((strlen(flower) + strlen(addon) + 1) < SIZE)
        strcat(flower, addon);
    puts(flower);

    puts("What is your favourite bug?");
    gets(bug);
    avaliable = BUGSIZE- strlen(bug) - 1;
    strncat(bug, addon, avaliable);
    puts(bug);

    return 0;
}