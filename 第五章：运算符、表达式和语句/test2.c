/*
编写一个程序，此程序要求输入一个整数，然后打印出从（包括）输入的值（包括）比输入的值大10
的所有整数值（也就是说，如果输入为5,那么就输出就从5到15）。要求在各个输出值之间用空格、
制表符或换行符分开
*/
#include <stdio.h>

int main(){
	int num;
	int i= 0;
	printf("Please enter a number:\n");
	scanf("%d", &num);
	while(i++<11){
		printf("%d ", num++);
	}
	printf("\n");
	return 0;
}
