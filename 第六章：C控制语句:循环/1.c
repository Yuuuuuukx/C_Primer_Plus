#include <stdio.h>

int main(){
	long num;
	long sum = 0;
	int status;
	
	printf("Please enter an integer to be summed:\n");
	printf("q to quit!\n");
	
	status = scanf("%ld", &num);
	
	while(status == 1){
		sum = num + sum;
		printf("Please enter the next integer:");
		status = scanf("%ld", &num);
	}
	
	printf("Those integer sum to %ld\n", sum);

	return 0;
}
