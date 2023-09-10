/*
	fathoms convert to feet 
*/
#include <stdio.h>

int main(){

	int feet, fathoms;  //int feet; int fathoms;
	fathoms = 2;
	feet = 6 * fathoms;
	
	printf("There is %d feet in %d fathoms.\n", feet, fathoms);
	printf("Yes, I said %d feet!\n", 6 * fathoms);
	
	return 0;
}
