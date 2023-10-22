/*
编写一个函数，返回一个double数组中最大的和最小的数之间的差值，并在一个简单的程序中测试这个函数。
*/
#include <stdio.h>
#define SIZE 5

double max_mini(const double *p, int n);

int main(){

	const double arr[SIZE] = {1.2, 5.3, 4.4, 6.7, 9.6};
	const double *pt = arr;
	double max_min;
	max_min = max_mini(pt, SIZE);
	printf("The max-min is %.2lf.\n", max_min);
	
	return 0;
}

double max_mini(const double *p, int n){
	
	double max, min, max_min;
	int i;
	max = *p;
	min = *p;
	p++;
	for(i = 1; i < n; i++){
		if(max < *p){
			max = *p;
		}
		else if(min > *p){
			min = *p;
		}
		p++;
	}
	max_min = max - min;
	return max_min;
}
