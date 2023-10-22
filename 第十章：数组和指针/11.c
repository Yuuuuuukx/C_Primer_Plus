#include <stdio.h>
#define SIZE 10

int sum(int *start, int *end);
int main(){

	int marbles[SIZE] = {10, 20, 5, 39, 4, 16, 19, 26, 31, 20};
	int answer;
	
	answer = sum(marbles, marbles + SIZE);
	printf("The total number of marbles is %d.\n", answer);
	printf("The size of marbles is %zd bytes.\n", sizeof(marbles));
	return 0;
}

int sum(int *start, int *end){
	int total = 0;
	while(start < end){
		total += *start;
		start++;
	}
	return total;
}
