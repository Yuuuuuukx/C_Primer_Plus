#include <stdio.h>

#define SIZE 4
	
int main(){
	
	int values1 = 44;
	int arr[SIZE];
	int values2 = 88;
	int i;
	
	printf("values1 = %d, values2 = %d.\n", values1, values2);
	for(i = -1; i <= SIZE; i++){
		arr[i] = 2 * i + 1;
	}
	for(i = -1; i < 7; i++){
		printf("%2d	%d\n", i, arr[i]);
	}

	return 0;
}
