#include <stdio.h>

int main(){
	
	int num;
	printf("     n     n_cube\n");
	for(num = 1; num < 7; num++){
		printf("%5d, %5d\n", num, num*num*num);
	}
	
	return 0;
}
