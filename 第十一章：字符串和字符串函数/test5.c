/*
编写一个函数is_within()。它接受两个参数，一个是字符，另一个是字符串的
指针。其功能是如果字符在字符串中，就返回一个非0值（真）；如果字符不在
字符串中就返回0值（假）。在一个使用循环语句为这个函数提供输入的完整程序
中进行测试。
*/
#include <stdio.h>
#include <string.h>
#define SIZE 81

int is_within(const char *str, char ch);

int main(){
    char input[SIZE];
    char ch;
    int found;

    puts("Enter a string:");
    while(gets(input) && input[0] != '\0'){
        puts("Enter a character:");
        ch = getchar();
        while(getchar() != '\n'){
            continue;
        }
        found = is_within(input, ch);
        if(found == 0)
            printf("%c is not in the string.\n", ch);
        else  
            printf("%c found in string %s.\n", ch, input);

        puts("Next string!");
    }
    puts("Done");
    return 0;
}

int is_within(const char *str, char ch){
    while(*str != ch && *str != '\0')
        str++;
    if(*str == '\0')
        return 0;
    else
        return 1;
}