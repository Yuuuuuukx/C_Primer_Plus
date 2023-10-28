#include <stdio.h>
#include <string.h>

#define MAX 40
#define ANSWER "Grant"

int main(){

    char try[MAX];
    puts("Who is buried in Grand's tomb?");
    gets(try);

    while(strcmp(try, ANSWER) != 0){
        puts("No, that's wrong. Try again.");
        gets(try);
    }

    puts("That's right!");

    return 0;
}