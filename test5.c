/*
编写一个程序，创建一个名为toes的整数数量。让程序把toes设置为10。再让程序计算两个toes的和以及toes的平方。
程序应该输出所有的3个值，并分别标识它们。
*/
#include <stdio.h>

int main(){
	int toes, toes_add, toes_square;
	toes = 10;
	
	toes_add = toes + toes;
	toes_square = toes * toes;
	
	printf("toes = %d\n", toes);
	printf("toes_add = %d\n", toes_add);
	printf("toes_aquare = %d\n", toes_square);
	return 0;
}
