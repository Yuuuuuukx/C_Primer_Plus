#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int times;
    int i;

    if(argc < 2 || (times = atoi(argv[1]) < 1)){
        printf("Usage: %s + positvie number.\n", argv[0]);
    }
    else{
        for(i = 0; i < times; i++){
            printf("Hello, good working.\n");
        }
    }

    return 0;
}