/*
用switch重做练习3。
*/
#include <stdio.h>

int main(){

	int num;
	int n_even = 0;
	int n_odd = 0;
	double sum_even = 0.0;
	double sum_odd = 0.0;

	printf("Please enter the num:\n");
	while(1){
		scanf("%d", &num);
		if(num == 0)
			break;
		switch(num % 2){
			case 0:
				n_even++;
				sum_even += num;
				break;
			default:
				n_odd++;
				sum_odd += num;
		}
	}
	 printf("num of even: %d, average of even:%.2f.\n", n_even, sum_even/n_even);
       	 printf("num of odd: %d, average of odd:%.2f.\n", n_odd, sum_odd/n_odd);

	return 0;
}
