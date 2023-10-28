/*
设计并测试一个函数，其功能是读取输入行里的第一个单词到数组，并丢掉该行
中其他的字符。一个单词的定义是一串字符，其中不含空格、制表符和换行符。
*/
#include <stdio.h>
#include <ctype.h>

#define SIZE 81
void getword(char *str);
int main(){

    char input[SIZE];

    puts("Please input a string:");
    gets(input);
    getword(input);
    puts(input);

    return 0;
}

void getword(char *str){
    char *ch;
    ch = str;
    while(!isspace(*ch++));
    str[ch - str] = '\0';
}