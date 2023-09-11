/*
通过试验的方法（即编写带有此类问题的程序）观察系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况
*/
#include <stdio.h>
#include <limits.h>   //INT_MAX. INT_MIN
#include <float.h>    //FLT_MAX, FLT_MIN

int main(){
	//printf("%d, %d\n", INT_MAX, INT_MIN);
	int i = 2147483647;
	float a = 3.402823e38 * 100.0f;
	float b = -1.175474e-38 / 100.0f;
	printf("%d, %d, %d\n", i, i+1, i+2);
	
	//printf("%e, %e\n", FLT_MAX, FLT_MIN);
	printf("%e\n", a);
	printf("%e\n", b);
	return 0;
}
