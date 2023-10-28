/*
编写一个函数string_in()，它接受两个字符串指针参数。如果第二个字符串被包
含在第一个字符串中，函数就返回被包含的字符串开始的地址。例如，
string_in("hats", "at")返回hats中的a的地址，否则，函数返回空指针。
在一个使用循环语句为这个函数提供输入的完整程序中进行测试。
*/
#include <stdio.h>
#include <string.h>

#define SIZE 81
char *string_in(const char *a1, const char *a2);
int main(){
    char s1[SIZE];
    char s2[SIZE];
    char *p;

    while(1){
        puts("Please input s1:");
        gets(s1);
        puts("Please input s1.");
        gets(s2);

        p = string_in(s1, s2);
        if(p){
            printf("Find s2 in s1 %p.\n", p);
        }
        else
            printf("Can't find s2 in s1.\n");
    }
    return 0;
}

char *string_in(const char *a1, const char *a2){
    int len2 = strlen(a2);
    int try_num = strlen(a1) - len2 + 1;
    int status;
    while((status = strncmp(a1, a2, len2)) && try_num--){
        a1++;
    }
    if(status){
        return NULL;
    }
    else
        return (char *)a1;
}