/*
为了使程序清单中的9.8中的函数to_binary()更一般化，可以在新的函数to_base_n()中使用第二个参数，且该参数的范围从2到10。
然后，这个新函数输出第一个参数在第二个参数规定的进制数下的数值结果。例如，to_base_n(129,8)的输出是201,也就是129的八进制
数值。最后在一个完整的程序中对该函数进行测试。
*/
#include <stdio.h>

void to_base_n(int n, int base);

int main(){

	int number;
	int b;
	printf("Enter an integer(q to quit):\n");
	while(scanf("%d", &number) == 1){
		printf("Enter number base(2-10):\n");
		scanf("%d", &b);
		printf("Base equivalent:\n");
		to_base_n(number, b);
		printf("\n");
		printf("Enter an interger(q to quit):\n");
	}
	printf("Bye.\n");
	return 0;
}

void to_base_n(int n, int base){
	
	int r;
	r = n % base;
	if(n >= base)
		to_base_n(n/base, base);
	putchar('0' + r);
	
}
