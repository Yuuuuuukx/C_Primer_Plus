#include <stdio.h>
#include <string.h>

#define SIZE 80

int main(){

    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    puts("What is your favourite flower?");
    gets(flower);

    strcat(flower, addon);
    puts(flower);
    puts(addon);

    return 0;
}