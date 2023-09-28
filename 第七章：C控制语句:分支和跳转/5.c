#include <stdio.h>
#define RATE1 0.12589
#define RATE2 0.17901
#define RATE3 0.20971
#define BREAK1 360.0
#define BREAK2 680.0
#define BASE1 (RATE1*BREAK1)
#define BASE2 (BASE1 + (BREAK2 - BREAK1)*RATE2)

int main(){
	
	double kwh;
	double bill;
	
	printf("Please enter the kwh used:\n");
	scanf("%lf", &kwh);
	
	if(kwh <= BREAK1){
		bill = kwh * RATE1;
	}
	else if(kwh <= BREAK2){
		bill = (BASE1) + (kwh - BREAK1) * (RATE2);
	}
	else
		bill = (BASE2) + (kwh - BREAK2) * (RATE3);
	
	printf("The charge for %.1f kwh is %.2f\n", kwh, bill);
	
	return 0;
}
