/*
对练习7进行修改，让它使用一个函数来返回计算值。
*/
#include <stdio.h>
double cal(double m, double n);

int main(){
	double m, n;
	double result;
	
	printf("Please enter a pair of number:\n");
	
	while(scanf("%lf %lf", &m, &n) == 2){
		result = cal(m, n);
		printf("%.3lf-%.3lf)/(%.3lf*%.3lf) = %.5lf\n", m, n, m, n, result);
		printf("Please enter the next pair of number:\n");
	}
	
	return 0;
}

double cal(double m, double n){
	return (m-n)/(m*n);
}
