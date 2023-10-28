/*
修改并测试练习1中的函数，使得可以在n个字符后，或第一个空格、制表符、
换行符后停止读取输入，由上述情况中最先被满足的那个终止读取（不能用
scanf()函数）。
*/
#include <stdio.h>
#include <ctype.h>
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
    int i, j;
    for(i = 0; i < num; i++){
        if(isspace(*(str + i))){
            for(j = i; j < SIZE; j++){
                *(str + i) = '\0';
            }
            break;
        }
    }
    
    if(i == num){
        for(; i < SIZE; i++){
            *(str + i) = '\0';
        }
    }

}