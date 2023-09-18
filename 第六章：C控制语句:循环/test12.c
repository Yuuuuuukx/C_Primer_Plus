/*
编写一个程序，创建一个8个元素的int数组，并且把元素分别设置为2的前8次幂，然后打印出它们的值。使用for循环来设置值：为了变化，
使用do while 循环来显示这些值。
*/
#include <stdio.h>
#include <math.h>
#define SIZE 8

int main(){
	int num[SIZE];
	int i;
	
	for(i = 0; i < SIZE; i++){
		num[i] = pow(2, i);
	}
	
	i = 0;
	do{
		printf("%d\t", num[i]);
	}while(++i < SIZE);
	printf("\n");
	return 0;
}
