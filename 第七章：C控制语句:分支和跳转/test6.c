/*
编写一个程序读取输入，直到#，并报告序列ei出现的次数。
此程序必须要记住前一个字符和当前的字符。用诸如“Receive your eieio award.”的输入测试它。
*/
#include <stdio.h>

int main(){

	char ch;
	int num = 0;

	while((ch = getchar()) != '#'){
		if(ch != 'e')
			continue;
		else{
			ch = getchar();
			if(ch == 'i'){
				num++;
			}
			else
				continue;
		}
		continue;
	}
	printf("total have %d 'ei'.\n", num);
	return 0;
}
