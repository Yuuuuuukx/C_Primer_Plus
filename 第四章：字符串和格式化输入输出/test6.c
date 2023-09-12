/*
编写一个程序，设置一个值为1.0/3.0的double类型变量和一个值为1.0/3.0的float类型变量。
每个变量的值显示三次：一次在小数点右侧显示4个数字，一次在小数点右侧显示12个数字，另一次在
小数点右侧显示16个数字。同时要让程序包括float.h文件，并显示FLT_DIG和DBL_DIG的值。
1.0/3.0的显示值与这些值一致玛？
*/
#include <stdio.h>
#include <float.h>

int main(){
	double a = 1.0/3.0;
	float b = 1.0/3.0;
	
	printf("%.4f %.12f %.16f\n", a, a, a);
	printf("%.4f %.12f %.16f\n", b, b, b);
	printf("FLT_DIG: %d\n", FLT_DIG);
	printf("DBL_DIG: %d\n", DBL_DIG);
	
	return 0;
}
