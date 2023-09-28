#include <stdio.h>

int main(){
	
	float length, width;
	printf("Enter the length of the tectangle:\n");
	while(scanf("%f", &length) == 1){
		printf("Length = %.2f.\n", length);
		printf("Enter its width:\n");
		if(scanf("%f", &width) != 1){
			break;
		}
		printf("Width = %.2f.\n", width);
		printf("Area = %.2f.\n", length * width);
		printf("Enter the next of the rectangle:\n");
	}
	printf("Invalid number, Done!\n");
	
	return 0;
}
