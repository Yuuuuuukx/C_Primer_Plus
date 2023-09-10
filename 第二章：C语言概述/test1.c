/*
编写一个程序，调用printf()函数在一行上输出您的名和姓，再调用一次printf()函数在两个单独的行上输出您的名和姓，
然后调用一对printf()函数在一行上输出您的名和姓。输出应如下所示：
Anton Bruckner
Anton
Bruckner
Anton Bruckner
*/
#include <stdio.h>

int main(){

	printf("Anton Buckner\n");
	printf("Anton\nBruckner\n");
	printf("Anton");
	printf(" Buckner\n");

	return 0;
}
