#include <stdio.h>
#define SIZE 4
int main(){

	int some_data[SIZE] = {1462, 1066};
	int i;

	printf("%s%14s", "i", "some_data[i]\n");
	for(i = 0; i < SIZE; i++)
		printf("%2d%14d\n", i, some_data[i]);
	return 0;
}
