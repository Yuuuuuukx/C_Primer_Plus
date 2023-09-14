/*
改写用来找到前20个整数值之和的程序addemup.c（程序清单5.13）（如果您愿意，可以把addemup.c程序看成是一个
计算如果您第一天得到$1，第二天$2，第三天得到$3，以此类推，您在20天里会挣多少钱的程序）。修改该程序，目的是
您能交互地告诉程序计算将进行到哪里。也就是说，用一个读入的变量来代替20。
*/
#include <stdio.h>

int main(){
	int sum = 0;
	int n;
	int count = 0;
	
	printf("Enter the limit numb:\n");
	scanf("%d", &n);
	while(count++<n){
		sum = sum + count;
	}
	printf("sum = %d\n", sum);
	return 0;
}
