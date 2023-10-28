#include <stdio.h>

void put1(const char * string){

    while(*string != '\0'){
        putchar(*string++);
    }
    putchar('\n');

}

void put2(const char * string){

    int i = 0;
    while(string[i] != '\0'){
        putchar(string[i++]);
    }
    putchar('\n');
}

//统计打印字符个数
int put3(const char * string){

    int count;
    while(*string){
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return count;
}