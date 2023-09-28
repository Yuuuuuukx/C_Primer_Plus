/*
编写一个程序，该程序读取输入直到遇到#字符。使程序打印每个输入的字符以及它的十进制ASCII码。每行打印8个字符/编码对。
建议：利用字符计数和模运算符（%）在每8个循环周期时打印一个换行符。
*/
#include <stdio.h>
#include <string.h>

int main(){
	char ch;
	int n = 0;
	
	printf("Please enter some char\n");
	while((ch = getchar()) != '#' && ch != '\n'){
		printf("%c:%d\t", ch, ch);
		n++;
		if(n % 8 == 0){
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}
