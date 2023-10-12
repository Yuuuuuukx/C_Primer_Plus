/*
两个数的谐均值可以这样计算：首先对两数值的到数取平均值，最后再取倒数。编写一个带有两个double参数的函数
计算这两个数的谐均值。
*/
#include <stdio.h>

double xiejun(double x, double y);

int main(){
	double a, b;
	printf("Please enter two doubles.\n");
	scanf("%lf%lf", &a, &b);
	printf("Xiejun_num is %.2lf.\n", xiejun(a, b));
	
	return 0;
}

double xiejun(double x, double y){
	
	double average;
	double num;
		
	average = ((1/x) + (1/y))/2;
	num = 1/average;
	return num;
}
