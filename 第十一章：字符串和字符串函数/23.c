#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LIMIT 80

void Toupper(char *str);
int PunctCount(const char *str);
int main(){

    char line[LIMIT];
    puts("Please enter a line:");
    gets(line);
    Toupper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n", PunctCount(line));

    return 0;
}

void Toupper(char *str){
    while(*str){
        *str = toupper(*str);
        str++;
    }
}
int PunctCount(const char *str){
    int cnt = 0;
    while(*str){
        if(ispunct(*str)){
            cnt++;
        }
        str++;
    }
    return cnt;
}