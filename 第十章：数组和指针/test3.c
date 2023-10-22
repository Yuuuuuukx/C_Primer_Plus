/*
编写一个函数，返回一个int数组中存储的最大数值，并在一个简单的程序中测试这个函数。
*/
#include <stdio.h>
int maxi(const int *p, int n);
int main(){
	
	const int source[5] = {1, 2, 5, 9, 2};
	const int *pt = source;
	
	printf("The arr max number is %d.\n", maxi(pt, 5));
	
	return 0;
}

int maxi(const int *p, int n){
	int max;
	max = *p;
	p++;
	int i;
	for(i = 1; i < n; i++){
		if(max < *p)
			max = *p;
		p++;
	}
	return max;
}
