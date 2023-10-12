#include <stdio.h>

int imin(int n, int m);

int main(){
	
	int evil1, evil2;
	printf("Please enter a pair of integers(q to quit):\n");
	
	while(scanf("%d %d", &evil1, &evil2) == 2){
		printf("The lesser of %d and %d is %d.\n", evil2, evil2, imin(evil1, evil2));
		printf("Please enter a pair of integers(q to quit):\n");
	}
	
	return 0;
}

int imin(int n, int m){

	if(n < m)
		return n;
	else
		return m;
}
