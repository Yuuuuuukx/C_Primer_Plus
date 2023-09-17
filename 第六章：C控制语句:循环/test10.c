/*
编写一个程序把8个整数读入一个数组中，然后以相反的顺序打印它们。
*/
#include <stdio.h>
#define SIZE 8

int main(){
	int count[SIZE];
	int num;
	for(int i = 0; i < SIZE; i++){
		printf("Please enter a num!\n");
		scanf("%d", &num);
		count[i] = num;
	}

	for(int j = SIZE - 1; j >= 0; j--){
		printf("%5d", count[j]);
	}
	printf("\n");
	return 0;
}
