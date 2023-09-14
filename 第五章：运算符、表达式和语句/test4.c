/*
编写一个程序让用户按厘米输入一个高度值，然后，程序按照厘米和英尺英寸显示这个高度值。
允许厘米和英寸的值出现小数部分。程序允许用户继续输入，直到用户输入一个非正的数值。程序运行
的示例如下所示：
Enter a height in centimeters: 182
182.0 cm = 5 feet, 11.7 inches
Enter a height in centimeters (<=0 to quit): 168
168.0 cm = 5 feet, 6.1 inches
Enter a height in centimeters (<=0 to quit ): 0
bye
*/
#include <stdio.h>
#define CM_PER_INCH 2.54
#define INCH_PER_FEET 12

int main(){
	float centimeters;
	int feet;
	float inches, left;
	
	printf("Please enter a height in centimeters:");
	scanf("%f", &centimeters);
	
	while(centimeters>0){
		inches = centimeters/CM_PER_INCH;
		feet = (int)inches/INCH_PER_FEET;
		left = inches - feet*INCH_PER_FEET;
		printf("%.1f cm = %d feet, %.1f inches\n", centimeters, feet, left);
		printf("Enter a height in centimeters(<=0 quit):");
		scanf("%f", &centimeters);
	}
	printf("bye\n");
	return 0;
}
