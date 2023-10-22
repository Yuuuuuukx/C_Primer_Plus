/*
编写一个程序，初始化一个二维double数组，并利用练习2中的任一函数来把这个数组复制到另一个二维数组（因为二维数组是数组的数组，
所以可以使用处理一维数组的函数来复制数组的每个子数组）。
*/
#include <stdio.h>

#define ROW 2
#define COL 5

void copy_arr(double *source, double *target, int n);
void show_arr(double *target, int n);

int main(){

	double source[ROW][COL] = {{1.1, 2.2, 3.3, 4.4, 5.5},{5.5, 4.4, 3.3, 2.2, 1.1}};
	
	double target[ROW][COL];
	
	copy_arr(source[0], target[0], ROW*COL);
	show_arr(target[0], ROW*COL);
	printf("source[0] = %p, target[0] = %p.\n", source[0], target[0]);
	return 0;
}

void copy_arr(double *source, double *target, int n){
	
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

