#include <stdio.h>
#define SIZE 4
int main(){

	short dates[SIZE];
	short * pti;
	short index;
	double bills[SIZE];
	double * ptf;

	pti = dates;
	for(index = 0; index < SIZE; index++)
		printf("pointer + %d = %p %p\n", index, pti + index, ptf + index);
	return 0;
}
