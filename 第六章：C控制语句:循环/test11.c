/*
考虑这两个无限序列：
	1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
	1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
编写一个程序来计算这两个序列不断变化的总和，直到达到某个次数。让用户交互地输入这个次数。
看看在20次、100次和500次之后的总和。是否每个序列都看上去要收敛于某个值？提示：奇数个-1相乘
的值为-1,而偶数个-1相乘的值为1。
*/
#include <stdio.h>

int main(){
	int count;
	double sum1 = 0, sum2 = 0;
	double i;
	int sign = 1;

	printf("Please enter the count:");
	scanf("%d", &count);
	
	for(i = 1.0; i <= count; i++, sign = 0 - sign){
		sum1 += 1.0/i;
		sum2 += (sign*1.0)/i;
	}
	
	printf("sum1 = %lf\n", sum1);
	printf("sum2 = %lf\n", sum2);
	
	return 0;
}
