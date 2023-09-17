/*
编写一个程序，要求输入两个浮点数，然后打印出用二者的差值除以二者的乘积所得的结果。在用户键入非数字的输入之前程序循环处理每对输入值。
*/
#include <stdio.h>

int main(){
	double m, n;
	printf("Please enter two float num(q to quit)\n");
	
	while(scanf("%lf %lf", &m, &n) == 2){
		printf("(%.2lf-%.2lf)/(%.2lf*%.2lf) = %.3lf\n", m, n, m, n, (m-n)/(m*n));
		printf("Please enter next two float num(q to quit)\n");
	}

	return 0;
}
