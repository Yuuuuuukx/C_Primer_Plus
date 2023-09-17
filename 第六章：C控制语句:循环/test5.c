/*
编写一个程序打印一个表，表的每一行都给出一个整数，它的平方以及它的立方。要求用户输入表的上限与下限。使用一个for循环。
*/
#include <stdio.h>

int main(){
	int min, max;
	int i;
	printf("Please enter the num's min:\n");
	scanf("%d", &min);
	printf("Please enter the num's max:\n");
	scanf("%d", &max);
	
	for(i = min; i <= max; i++){
		printf("%8d%8d%8d\n", i, i*i, i*i*i);
	}
	return 0;
}
