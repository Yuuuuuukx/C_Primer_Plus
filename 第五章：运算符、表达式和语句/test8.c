/*
编写一个程序，该程序要求用户输入一个华氏温度。程序以double类型读入温度值，并将它作为一个参数传递给用户提供函数
Temperatures()。该函数将计算相应的摄氏温度和绝对温度，并以小数点右边有两位数字的精度显示这三种温度。它应该用每个
值所代表的温度来标识这3个值。下面将华氏温度转换成摄氏温度的方程：
Celsius = 1.8 * Fahrenheit + 32.0
通常用在科学上的绝对温度的刻度是0代表绝对零，是可能温度的下界。下面是将摄氏温度转换为绝对温度的方程：
Kelvin = Celsius + 273.16
Temperatures()函数使用const来创建代表该转换里的3个常量的符号。main()函数将使用一个循环来允许用户重复地输入温度，
当用户输入q或其他非数字值时，循环结束。
*/
#include <stdio.h>

void Temperature(float n);

int main(){
	float tem;
	printf("Please enter the temperature in Fahrenhei:\n");
	while(scanf("%f", &tem)){
		Temperature(tem);
		printf("Input the next value:\n");
	}
	
	return 0;
}

void Temperature(float n){
	
	const float F_C_1 = 1.8;
	const float F_C_2 = 32.0;
	const float C_K = 273.16;
	float c_t, k_t;
	c_t = F_C_1*n + F_C_2;
	k_t = c_t + C_K;
	printf("%.2fF = %.2fC = %.2fK\n", n, c_t, k_t);
}
