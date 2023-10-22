/*
编写一个程序，初始化一个double数组，然后把数组内容复制到另外两个数组（3个数组都需要在主程序中声明）。制作第一份拷贝的函数
使用数组符号。制作第二份拷贝的函数使用指针符号，并使用指针的增量操作。把目标数组名和要复制的元素数目做为参数传递给函数。也就是说，
如果给定了下列声明，函数调用应该如下面所示：
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5);
	double target1[5];
	double target2[5];
	copy_arr(source, target1, 5);
	copy_ptr(source, target1, 5);
*/
#include <stdio.h>
#define SIZE 5
void copy_arr(double source[], double target[], int n);
void copy_ptr(double *source, double *target, int n);
void show_arr(double *target, int n);

int main(){

	double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[SIZE] = {};
	double target2[SIZE] = {};
	
	copy_arr(source, target1, SIZE);
	copy_ptr(source, target2, SIZE);
	
	show_arr(target1, SIZE);
	show_arr(target2, SIZE);

	return 0;
}

void copy_arr(double source[], double target[], int n){
	int i;
	for(i = 0; i < n; i++){
		target[i] = source[i];
	}
}

void copy_ptr(double *source, double *target, int n){
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
