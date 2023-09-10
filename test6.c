/*
编写一个能够产生下列输出的程序：
Smile!Smile!Smile!
Smile!Smile!
Smile!
在程序中定义一个能显示字符串smile！一次的函数，并在需要时使用该函数。
*/
#include <stdio.h>
void print_smile();
int main(){
	
	print_smile();
	print_smile();
	print_smile();
	printf("\n");
	print_smile();
        print_smile();
	printf("\n");
        print_smile();
	printf("\n");
	return 0;
}

void print_smile(){
	printf("Smile!");
}
