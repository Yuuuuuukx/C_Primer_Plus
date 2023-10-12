/*
编写并测试函数larger_of(),其功能是将两个double类型变量的数值替换成它们中的较大值。例
如，larger_of(x,y)会把x和y中的较大值重新赋给变量x和y。
*/
#include <stdio.h>

void larger_of(double *x, double *y);

int main(){

	double x, y;
	printf("Please enter two doubles.\n");
	scanf("%lf%lf", &x, &y);
	larger_of(&x, &y);
	printf("x = %.2lf, y = %.2lf\n", x, y);
}

void larger_of(double *x, double *y){
	if(*x > *y)
		*y = *x;
	else
		*x = *y;
}
