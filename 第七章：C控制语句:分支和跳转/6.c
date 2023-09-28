#include <stdio.h>
#include <stdbool.h>

int main(){
	
	unsigned long  num;
	unsigned long div;
	bool isPrime;
	
	printf("Please enter a num(q to quit)\n");
	
	while(scanf("%lu", &num) == 1){
		for(div = 2, isPrime = true; (div*div) <= num; div++){
			if(num % div == 0){
				if((div*div) != num)
					printf("%lu is divisable by %lu and %lu.\n", num, div, num/div);
				else
					printf("%lu is divisable by %lu.\n", num, div);
			isPrime = false;
			}
		}
		if(isPrime)
			printf("%lu is Prime.\n", num);
		printf("Please enter a num(q to quit)\n");
	}
	return 0;
}
