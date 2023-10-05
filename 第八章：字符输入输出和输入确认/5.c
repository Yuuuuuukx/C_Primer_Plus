#include <stdio.h>
#include <stdbool.h>

int get_int();
bool bad_limits(int begin, int end, int low, int high);
int sum_squares(int a, int b);
int main(){
	
	const int MIN = -1000;
	const int MAX = 1000;
	int start;
	int stop;
	
	int sum;

	printf("This program computes the sum of the squares of "
		" intergers in a range.\n");
	printf("The lower bound should not be less than -1000.\n");
	printf("The upper bound should not be more than 1000.\n");
	printf("Enter the limits:\n");
	printf("lower limit:\n");
	start = get_int();
	printf("upper limit:\n");
	stop = get_int();
	
	while(start != 0 || stop != 0){
		if(bad_limits(start, stop, MIN, MAX))
			printf("Please try again.\n");
		else{
			sum = sum_squares(start, stop);
			printf("The sum is %d.\n", sum);
		}
		printf("Enter the limits:\n");
	        printf("lower limit:\n");
        	start = get_int();
        	printf("upper limit:\n");
      	 	stop = get_int();
	}
	
	printf("Done.\n");
	
	return 0;
}

int get_int(){
	
	int input;
	char ch;
	
	while(scanf("%d", &input) != 1){
		while((ch = getchar()) != '\n'){
			putchar(ch);
		}
		printf(" is not an integer.\n");
		printf("Please enter an integer  value,such as: 25, -178 or 3\n");
	}
	return input;
}

bool bad_limits(int begin, int end, int low, int high){
	
	bool not_good = false;
	if(begin > end){
		printf("%d isn't samller than %d.\n", begin, end);
		not_good = true;
	}
	if(begin < low || end < low){
		printf("Values must be %d or geater.\n", low);
		not_good = true;
	}
	if(begin > high || end > high){
		printf("Values must be %d or less.\n", high);
		not_good = true;
	}
	
	return not_good;
}

int sum_squares(int a, int b){
	
	int total = 0;
	int i;
	for(i = a; i <= b; i++){
		total += i*i;
	} 
	return total;
}
