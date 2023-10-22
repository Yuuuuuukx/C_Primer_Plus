/*
利用练习2中的复制函数，把一个包含7个元素的数组内第3到5元素复制到一个包含3个元素的数组中。函数本身不需要修改，只需要选择合适的实际参数
（实际参数不需要是数组名和数组大小，而只须是数组元素的地址和需要复制的元素数目）。
*/
#include <stdio.h>
#define SIZE 7
void copy_arr(double *source, double *target, int n);
void show_arr(double *target, int n);
int main(){

	double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	double target[3];
	
	copy_arr(source + 2, target, 3);
	show_arr(target, 3);

	return 0;
}

void copy_arr(double *source, double *target,int n){
	int i;
	for(i = 0; i < n; i++){
		*target++ = *source++;
	}
}

void show_arr(double *target, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%.2f ", *target++);
	}
	printf("\n");
}
