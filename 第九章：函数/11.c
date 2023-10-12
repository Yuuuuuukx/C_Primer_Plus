#include <stdio.h>

void interchange(int * u, int * v);

int main(){

	int x = 5, y = 10;
	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(&x, &y);
	printf("Now x = %d, y = %d.\n", x, y);

	return 0;
}

void interchange(int *  u, int * v){
	
	int tmp;
	tmp = *u;
	*u = *v;
	*v = tmp;
	
}
