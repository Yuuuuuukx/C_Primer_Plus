/*
编写一个程序，把您的年龄转换成天数并显示二者的值。不用考虑平年和闰年的问题
*/
#include <stdio.h>

int main(){

	int years, days;
	years = 26;
	days = 365 * years;
	printf("My age is %d years old.\n", years);
	printf("Days is %d.\n", days);

	return 0;
}
