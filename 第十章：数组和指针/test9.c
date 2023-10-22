/*
编写一个函数，把两个数组内的相应元素相加，结果存储到第三个数组内，也就是说，如果数组1具有值2、4、5、8，
数组2具有值1、0、4、6,则函数对数组3赋值为3、4、9、14。函数的参数包括3个数组名和数组大小。并在一个简单的
程序中测试这个函数。
*/
#include <stdio.h>
#define SIZE 4

void add_arr(int *arr1, int *arr2, int *arr3, int n);
void show_arr(int *arr3, int n);

int main(){

	int arr1[SIZE] = {2, 4, 5, 8};
	int arr2[SIZE] = {1, 0, 4, 6};
	int arr3[SIZE];
	
	add_arr(arr1, arr2, arr3, SIZE);
	show_arr(arr3, SIZE);
	
	return 0;
}

void add_arr(int *arr1, int *arr2, int *arr3, int n){
	int i;
	for(i = 0; i < n; i++){
		*arr3++ = *arr1++ + *arr2++;
	}
}

void show_arr(int *arr3, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", *arr3++);
	}
	printf("\n");
}
