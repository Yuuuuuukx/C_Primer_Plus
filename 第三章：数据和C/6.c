#include <stdio.h>

int main(){
	float aboat = 32000.0;
	double abet = 2.14e9;
	
	printf("%f can be written %e\n", aboat, aboat);
	printf("%f can be written %e\n", abet, abet);
	
	return 0;
}
