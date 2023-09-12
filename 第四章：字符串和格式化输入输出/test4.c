/*
编写一个程序，要求输入身高（以英寸为单位）和名字，然后以如下形式显示：
Dabney, you are 6.208 feet tall
使用float类型，使用/作为除号。如果您愿意，可以要求以厘米为单位输入身高，并以米为单位进行显示。
*/
#include <stdio.h>

int main(){
	float hight;
	printf("Please entre your hight:\n");
	scanf("%f", &hight);
	printf("Dabney, you are %0.3f feet tall.\n", hight/100.0);
	
	return 0;
}
