#include <stdio.h>
#include <string.h>
#include "8_2.h"

int menu(){
	
	int code;
	int status;
	
	printf("%s\n", STARTS);
	printf("Enter the number of the desired hotel:\n");
	printf("1) Fairfield Arms	2) Hotel Olympic\n");
	printf("3) Chertworthy Plaza	4) The Stockton\n");
	printf("5) Quit\n");
	printf("%s\n", STARTS);
	
	while((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5)){
		if(status != 1)
			scanf("%*s");
		printf("Enter an integer from 1 to 5.\n");
	}
	return code;
}

int getnights(){
	int nights;
	int status;
	
	printf("How many nights are needed? \n");
	while((status = scanf("%d", &nights) != 1) || nights <= 0){
		if(status != 1)
			scanf("%*s");
		printf("Please enter an integer such as 2 more than 0.\n");
	}
	return nights;
}

void showprice(double rate, int nights){
	int n;
	double total = 0.0;
	double factor = 1.0;
	
	for(n = 1; n <= nights; n++, factor *= DISCOUNT){
		total += rate * factor; 
	}
	printf("The total cost will be %.2f.\n", total);
}
