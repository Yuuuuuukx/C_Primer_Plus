/*
编写一个程序。该程序读取整数，直到输入0。输入终止后，程序应该报告输入的偶数（不包括0）总个数、偶数的平均值，输入的奇数
总个数以及奇数的平均值。
*/
#include <stdio.h>

int main(){
	
	int i;
	int m = 0, n = 0;
	int oushu = 0, jishu = 0;
	float a_oushu = 0, a_jishu = 0;
	printf("Please enter the number\n");
	while(scanf("%d", &i) == 1){
		if(i == 0){
			break;
		}
		else if(i%2 == 0){
			m++;
			oushu += i; 
		}
		else {
			n++;
			jishu += i;
		}
	}
	if(m == 0){
		a_oushu = 0;
	}
	else
		a_oushu = oushu/m;
	if(n == 0){
		a_jishu = 0;
	}
	else
		a_jishu = jishu/n;
	
	printf("您输入的偶数个数为%d，奇数的个数为%d\n", m, n);
	printf("您输入的偶数平均值为%.2f， 奇数的平均值为%.2f\n",  a_oushu, a_jishu);
	
	return 0;
}
