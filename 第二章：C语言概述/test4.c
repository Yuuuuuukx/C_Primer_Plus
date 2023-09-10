/*
编写一个能够产生下面输出的程序：
For he's a jolly good fellow!
For he's a jolly good fellow!
For he's a jolly good fellow!
Which nobody can deny!
程序中除了main()函数之外，要使用两个用户定义的函数：一个用于把上面的夸奖消息输出一次：
另一个用于把最后一行输出一次。
*/

#include <stdio.h>

void func1();
void func2();

int main(){
	func1();
	func2();
	
	return 0;
}

void func1(){
	printf("For he's a jolly good fellow!\n");
	printf("For he's a jolly good fellow!\n");
	printf("For he's a jolly good fellow!\n");
}

void func2(){
	printf("Which nobody can deny!\n");
}
