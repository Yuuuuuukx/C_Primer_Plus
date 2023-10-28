#include <stdio.h>
#include <string.h>

#define LIM 20
#define SIZE 81

void stsrt(char *string[], int num);

int main(){

    char input[LIM][SIZE];
    char *ptstr[LIM];
    int cnt = 0;
    int i;

    printf("Input up to %d lines, and I will sort them.\n", LIM);
    printf("To stop, press the Enter key at a lines's start.\n");

    while(cnt < LIM && gets(input[cnt]) != NULL && input[cnt][0] != 0){
        ptstr[cnt] = input[cnt];
        cnt++;
    }

    stsrt(ptstr, cnt);
    puts("Here is the sorted list:");
    for(i = 0; i < cnt; i++){
        puts(ptstr[i]);
    }

    return 0;
}

void stsrt(char *string[], int num){
    int top;
    int seek;
    char *temp;

    for(top = 0; top < num - 1; top++){
        for(seek = top + 1; seek < num; seek++){
            if(strcmp(string[top], string[seek]) > 0){
                temp = string[top];
                string[top] = string[seek];
                string[seek] = temp;            
            } 
        }
    }
}
