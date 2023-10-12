/*
设计函数min(x,y)，返回两个double数值中较小的数值，同时用一个简单的驱动程序测试该函数
*/
#include <stdio.h>

double min(double m, double n);

int main(){
	double num1, num2;
	printf("Please enter two double number.\n");
	while(scanf("%lf %lf", &num1, &num2) == 2){
		printf("The min num is %.2lf.\n", min(num1, num2));
		printf("Please enter next number.\n");
	}

}

double min(double m, double n){
	
	double temp;
	if(m < n)
		temp = m;
	else if(n < m)
		temp = n;
	return temp;
}
