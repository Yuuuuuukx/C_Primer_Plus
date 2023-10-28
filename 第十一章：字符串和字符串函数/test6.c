/*
strncpy(s1, s2, n)函数从s2复制n个字符给s1，并在必要时截断s2或为其填充
额外的空字符。如果s2的长度等于或大于n，目标字符串就没有标志结束的空字符。
函数返回s1。自己编写这个函数，并在一个使用循环语句为这个函数提供输入的完
整程序中进行测试。
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 81
void mystrncpy(char *a1, char *a2, int num);
int main(){

    char s1[SIZE];
    char s2[SIZE];
    int n;

    puts("Please enter a string for s2:");
    while(gets(s2) && s2[0] != '\0'){
        puts("Please enter a number you want to copy:");
        scanf("%d", &n);
        getchar();
        mystrncpy(s1, s2, n);
        puts(s1);
        puts("Next string.");
    }
    puts("Done");
    return 0;
}

void mystrncpy(char *a1, char *a2, int num){
    int i;
    for(i = 0; i < num; i++){
        *(a1 + i) = *(a2 + i);
    }
    if(strlen(a2) >= num){
        *(a1 + i) = '\0';
    }
}
