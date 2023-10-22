/*
编写一个程序，初始化一个3X5的double二维数组，并利用一个基于变长数组的函数把该数组复制到另一个二维数组。
还要编写一个基于变长数组的函数来显示两个数组的内容。这两个函数应该能够处理任意的NXM数组（如果没有可以
支持变长数组的编译器，就使用传统C中处理NX5数组的函数方法）。
*/
#include <stdio.h>

void copy_ptr(int n, int m, double source[n][m], double target[n][m]);
void show_arr(int n, int m, double target[n][m]);

int main(){

	double source[3][5] = {
		{1.1, 2.2, 3.3, 4.4, 5.5},
		{6.6, 7.7, 8.8, 9.9, 10.10},
		{11.11, 12.12, 13.13, 14.14, 15.15}
	};
	double target[3][5];
	
	copy_ptr(3, 5, source, target);
	show_arr(3, 5, target);

	return 0;
}

void copy_ptr(int n, int m, double source[n][m], double target[n][m]){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			target[i][j] = source[i][j];
		}
	}
}

void show_arr(int n, int m, double target[n][m]){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){	
			printf("%5.2lf ", target[i][j]);
		}
		printf("\n");
	}
}
