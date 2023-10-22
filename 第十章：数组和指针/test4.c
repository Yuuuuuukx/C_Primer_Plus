/*
编写一个函数，返回一个double数组中存储的最大数值的索引，并在一个简单的程序中测试这个函数。
*/
#include <stdio.h>
#define SIZE 5

int max_index(const double *p, int n);

int main(){
	
	const double arr[SIZE] = {1.2, 2.3, 5.6, 7.8, 3.7};
	int index;
	const double *pt = arr;
	index = max_index(pt, SIZE);
	printf("max_index = %d.\n", index);
	
	return 0;
}

int max_index(const double *p, int n){
	int max, i, index = 0;
	max = *p;
	p++;
	for(i = 1; i < n; i++){
		if(max < *p){
			max = *p;
			index = i;
		}
		p++;
	}
	return index;
}


