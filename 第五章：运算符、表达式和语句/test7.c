/*
编写一个程序，该程序要求输入一个float型数并打印该数的立方值。使用您自己设计的函数来计算该值的
立方并且将它的立方打印出来。main()程序把输入的值传递给该函数。
*/
#include <stdio.h>

void ShowCube(float n);

int main(){
	float val;
	printf("Enter a float num:");
	scanf("%f", &val);
	ShowCube(val);
	
	return 0;
}

void ShowCube(float n){
	printf("The Cube of number %.2f is %.2f.\n", n, n*n*n);
	
}
