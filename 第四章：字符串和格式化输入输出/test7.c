/*
编写一个程序，要求用户输入行使的英里数和消耗汽油的加仑数。接着应该计算和显示消耗每加仑汽油
行使的英里数，显示方式是在小数点右侧显示一个数字。然后，根据1加仑约等于3.785升，1英里约等于
1.609公里的规则，它应该把每加仑英里数转换成每100公里的升数（欧洲通用的燃料消耗表示法），并
显示结果，显示方式是在小数点右侧显示一个数字（请注意，美国方案测量每单位距离消耗的燃料数，而
欧洲方案测量每单位燃料的行使距离）。用符号常量表示两个转换系数（使用const或#define）
*/
#include <stdio.h>
#define G_L 3.785
#define M_K 1.609

int main(){
	float miles;
	float gallons;
	float liters;
	float km;

	printf("Please enter run miles:\n");
	scanf("%f", &miles);
	printf("Please enter use gallons:\n");
	scanf("%f", &gallons);
	
	liters = gallons*3.785;
	km = miles*1.609;

	printf("Run %.1f miles per gallon\n", miles/gallons);
	printf("Run 100Km use %.1f liter\n", (liters/km)*100);

	return 0;
}

