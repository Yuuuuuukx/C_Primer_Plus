/*
编写一个程序，声明一个3X5的数组并初始化，具体数值可以随意。程序打印出数值，然后数值翻一番，接着再次打印出新值。
编写一个函数来显示数组的内容，再编写另一个函数执行翻倍功能。数组名和数组行数作为参数由程序传递给函数。
*/
#include <stdio.h>
void show_arr(int (*pt)[5], int rows);
void array_add(int (*pa)[5], int rows);
int main(){

	int array[3][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};
	
	printf("array: \n");
	show_arr(array, 3);
	array_add(array, 3);
	printf("array now is: \n");
	show_arr(array, 3);
	
	return 0;
}

void show_arr(int (*pt)[5], int rows){
	int i, j;
	for(i = 0; i < rows; i++){
		for(j = 0; j < 5; j++){
			printf("%5d", pt[i][j]);
		}
		printf("\n");
	}
}

void array_add(int (*pa)[5], int rows){
	int i, j;
	for(i = 0; i < rows; i++){
		for(j = 0; j < 5; j++){
			pa[i][j] *= 2;
		}
	}
}
