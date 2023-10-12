/*
在第6章“C控制语句：循环”的程序清单6.20中，函数power()的功能是返回一个double类型数的某个正整数次幂，现在改进该函数。使其
能正确地计算负幂。同时，用该函数实现0的任何次幂为0,并且任何数值的0次幂为1,使用循环的方法编写该函数并在一个程序中测试它。
*/
#include <stdio.h>
double power(double n, int p);
int main(){
	double x, xpow;
	int exp;
	printf("Enter a num and the integer power:\n");
	while(scanf("%lf%d", &x, &exp) == 2){
		xpow = power(x, exp);
		printf("%.3f to the power %d is %.5f\n", x, exp, xpow);
		printf("Please enter the next number:\n");
	}
	return 0;
}

double power(double n, int p){
	int i;
	double pow = 1;
	
	if(p == 0){
		if(n == 0)
			printf("0 power 0 is undefined and useless, using 1 as it value.\n");
		pow = 1.0;
	}
	else if(n == 0){
		pow = 0.0;
	}
	else if(p > 0){
		for(i = 1; i <= p; i++)
			pow *= n;
	}
	else
		for(i = 1; i <= -p; i++)
			pow *= 1/n;
	return pow;
}
