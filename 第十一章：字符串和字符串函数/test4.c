/*
设计并测试一个函数，其功能是搜索由函数的第一个参数指定的字符串，在其中查
找由函数的第二个参数指定的字符第一次出现的位置。如果找到，返回指向这个字
符的指针：如果没有找到，返回空字符（这种方式和strchr()函数的功能一样）。
在一个使用循环语句为这个函数提供输入的完整程序中进行测试。
*/
#include <stdio.h>
#define SIZE 81
char *findfirst(char *str, char ch);
int main(){
    char input[SIZE];
    char ch;
    char *pt;

    puts("Please enter a string.");
    while(gets(input) && input[0] != '\0'){
        puts("Please enter a character you want to find:");
        ch = getchar();
        while(getchar() != '\n');
        pt = findfirst(input, ch);
        if(pt == NULL){
            printf("Could not find %c int string.\n", ch);
        }
        else
            printf("Find character %c in %p.\n", ch, pt);
        puts("Next againg.");
    }

    return 0;
}
char *findfirst(char *str, char ch){
    while(*str != '\0'){
        if(*str++ == ch){
            return str;
        }
    }
    return NULL;
}