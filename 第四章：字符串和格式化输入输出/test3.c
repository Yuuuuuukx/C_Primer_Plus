/*
编写一个程序，读取一个浮点数，并且首先以小数点计数法，然后以指数计数法打印之。
输出使用下列形式（在指数位置显示的数字的位数可能会随系统而不同）：
a.The input is 21.3 or 2.1e+001
b.The input is +21.290 or 2.129E+001
*/
#include <stdio.h>

int main(){
	float num;
	printf("Please enter a float number:\n");
	scanf("%f", &num);
	printf("The input is %0.1f or %0.1e\n", num, num);
	printf("The input is %+0.3f or %0.3E\n", num, num);
	
	return 0;
}




