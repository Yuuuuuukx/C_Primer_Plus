#include <stdio.h>
#include <string.h>

#define SIZE 40
#define LIM  5

int main(){

    char qwords[SIZE][LIM];
    char temp[SIZE];
    int i = 0;

    printf("Please enter %d words begining with q:\n", LIM);
    while(i < LIM && gets(temp)){
        if(strncmp(temp, "q", 1) != 0){
            printf("%s doesn't begin with q!\n", temp);
        }
        else{
            strcpy(qwords[i], temp);
            i++;
        }
    }
    puts("Here are the word accept:");
    for(i = 0; i < LIM; i++){
        puts(qwords[i]);
    }

    return 0;
}