/*
编写一个程序，要求输入一个ASCII码值（如66），然后输出相应字符。
*/
#include <stdio.h>

int main(){
	int ascii;
	printf("Please enter an ASCII code: ");
	scanf("%d", &ascii);
	printf("%d is the ASCII code for %c.\n", ascii, ascii); 
	
	return 0;
}
