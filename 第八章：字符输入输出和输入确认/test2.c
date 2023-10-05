/*
编写一个程序，把输入作为字符流读取，直到遇到EOF。令该程序打印每个输入字符及其ASCII编码的十进制值。
注意在ASCII序列中空格字符前面的字符是非打印字符，要特殊处理这些字符。如果非打印字符是换行符或制表
符，则分别打印\n或\t。否则，使用控制字符符号。例如，ASCII的1是Ctrl+A，可以显示为^A。注意A的ASCII值是
Ctrl+A的值加64。对其他非打印字符也保持相似的关系。除去每次遇到一个换行符时就开始一个新行之外，每行
打印10对值。
*/
#include <stdio.h>

int main(){
	
	printf("Please enter the characters:\n");
	
	int input;
	int count = 0;
	
	while((input = getchar()) != EOF){
		if(input == '\n')
			printf("\\n|%d  ", input);
		else if(input == '\t')
			printf("\\t|%d  ", input);
		else if(input >= 0 && input < ' ')
			printf("^%c|%d  ", (input + 64), input);
		else
			printf("%c|%d  ", input, input);
		count++;
		if(count % 10 == 0){
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}
