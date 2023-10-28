/*
编写一个函数。其参数为一个字符串，函数删除字符串中的空格。在一个可以循环
读取的程序中进行测试，直到用户输入空行。对于任何输入字符串，函数都应该适
用并可以显示结果。
*/
#include <stdio.h>
#define SIZE 81
void drop_space(char *str);
int main(){

    char input[SIZE];
    puts("Please enter a string.");
    while(gets(input) && input[0] != '\0'){
        drop_space(input);
        puts(input);
        printf("Next string:\n");
    }
    puts("Done");

    return 0;
 }

 void drop_space(char *str){
    char *pt;
    while(*str){
        if(*str == ' '){
            pt = str;
            do
            {
                *pt =  *(pt+1);
                pt++;
            } while (*pt);
        }
        else    
            str++;
    }
 }