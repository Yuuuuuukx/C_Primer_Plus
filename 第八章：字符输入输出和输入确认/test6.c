/*
修改程序清单8.8中的get_first()函数，使其返回所遇到的第一个非空白字符。在一个简单的程序中测试函数。
*/
#include <stdio.h>
#include <ctype.h>

char get_first();

int main(){
	
	char firstchar;
	printf("Please enter a string:\n");
	
	firstchar = get_first();
	putchar(firstchar);
	printf("\n");
	
        return 0;
}

char get_first(){
        int input;
        while(isspace(input = getchar()));
        return input;
}

