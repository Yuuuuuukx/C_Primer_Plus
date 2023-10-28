/*
编写一个函数，其功能是使输入字符串反序。在一个使用循环语句为这个函数提
供输入的完整程序中进行测试。
*/
#include <stdio.h>
#include <string.h>
#define SIZE 81
void reverse(char *str);
int main(){
    char input[SIZE];
    puts("Please enter a string string:");
    while(gets(input) && input[0] != '\0'){
        reverse(input);
        puts(input);
        puts("Please enter a string again:");
    }
    puts("Done");
    return 0;
}

void reverse(char *str){
    int i;
    char temp;
    int len = strlen(str);
    for(i = 0; i < len/2; i++){
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 -i] = temp;
    }
}