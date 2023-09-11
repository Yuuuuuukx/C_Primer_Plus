/*
编写一个程序，读入一个浮点数，并分别以小数形式和指数形式打印。输出应如同下面格式（实际显示指数位数也许因系统而不同）
*/

#include <stdio.h>

int main(){
	float a;
	printf("Please enter a float number: ");
	scanf("%f", &a);
	printf("The input is %f or %e\n", a, a);
	return 0;
}
