/*
设计并测试一个函数，可以从输入读取n个字符（包括空格、制表符和换行符），
把结果存储在一个数组中，这个数组的地址通过参数来传递。
*/
#include <stdio.h>
#define SIZE 81
void getnword(char *str, int num);
int main(){

    char input[SIZE];
    int n;

    puts("Please input a number you want to reed:");
    scanf("%d", &n);
    getchar();
    puts("Please input a string:");
    gets(input);
    getnword(input, n);
    puts(input);

    return 0;
}

void getnword(char *str, int num){
    for(; num < SIZE; num++){
        *(str + num) = '\0';
    }
}