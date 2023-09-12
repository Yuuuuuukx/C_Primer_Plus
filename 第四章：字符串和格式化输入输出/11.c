#include <stdio.h>

int main(){

	unsigned int width, precision;
	int num = 256;
	float weight = 242.5;
	
	printf("What field width?\n");
	scanf("%d", &width);
	printf("THe number is: *%*d*\n", width, num);
	
	printf("Now enter a width and a precision:\n");
	scanf("%d %d", &width, &precision);
	printf("Weight = *%*.*f*\n", width, precision, weight);
	
	return 0;
}
