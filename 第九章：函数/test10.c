/*
编写并测试一个函数Fibonacci()，在该函数中使用循环代替递归完成斐波那契数列的计算。
*/
#include <stdio.h>

long Fibonacci(int n);

int main(){
	int n;
	printf("Enter an integer(q to quit):\n");
	while(scanf("%d", &n) == 1){
		printf("The term of %d, it's Fibonacci value is:%ld.\n", n, Fibonacci(n));
		printf("Enter an integer(q to quit):\n");
	}
	
	return 0;
}
long Fibonacci(int n){
	
	int n1, n2;
	int i, sum;
	if(n > 2){
		for(n1 = 1, n2 = 1, i = 3; i <= n; i++){
			sum = n1 + n2;
			n1 = n2;
			n2 = sum;
		}
	}
	else
		return 1;
	return sum;
}
