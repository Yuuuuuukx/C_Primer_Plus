#include <stdio.h>
#define SIZE 5
void show_array(const double ar[], int n);
void mult_array(double arr[], int n, double mult);

int main(){
	
	double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};
	show_array(dip, SIZE);
	mult_array(dip, SIZE, 2.5);
	show_array(dip, SIZE);
	return 0;
}

void show_array(const double arr[], int n){
	
	int i;
	for(i = 0; i < n; i++){
		printf("%8.3lf", arr[i]);
	}
	printf("\n");
}

void mult_array(double arr[], int n, double mult){
	
	int i;
	for(i = 0; i < SIZE; i++){
		arr[i] *= mult;
	}
	
}
