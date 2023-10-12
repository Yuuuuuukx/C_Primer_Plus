/*
编写一个程序，使其从标准输入读取字符，直到遇到文件结尾。对于每个字符，程序需要检查并报告该字符是否是一个字母。
如果是的话，程序还应报告该字母在字母表中的数值位置。例如，c和C的字母位置都是3。可以先实现这样一个函数：接受一个
字符参数，如果该字符为字母则返回该字母的数值位置，否则返回-1。
*/
#include <stdio.h>
#include <ctype.h>

int fun(char ch);

int main(){
	int ch;
	int a;
	while((ch = getchar()) != EOF){
		a = fun(ch);
		if(a == -1)
			printf("The character you input is not an alpha.\n");
		else
			printf("%c is number %d.\n", ch, a);
		while((ch = getchar()) != '\n')
			continue;
	}
	printf("Bye.\n");
	return 0;
}

int fun(char ch){
	int n;
	if(isalpha(ch)){
		ch = toupper(ch);
		n = ch - 64;
		return n;
	}
	else
		return -1;
}
