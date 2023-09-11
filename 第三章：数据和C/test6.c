/*
1个水分子的质量约为3.0X10-e23g， 1夸脱水大约有950g。编写一个程序，要求输入水的夸脱数，
然后显示这么多水中包含多少个水分子。
*/
#include <stdio.h>

int main(){
	float quarts;
	float mass = 3.0e-23;
	float mass_quart = 950;
	printf("PLease enter the number of quart: ");
	scanf("%f", &quarts);
	printf("%f quarts of warter contain %e of molucules.\n", quarts, quarts*mass_quart/mass);
	return 0;
}

