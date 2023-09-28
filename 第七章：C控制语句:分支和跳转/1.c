#include <stdio.h>

int main(){
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;
	
	printf("Enter the list of daily low temperature:\n");
	printf("Enter q for quit:\n");
	
	while(scanf("%f", &temperature) == 1){
		all_days++;
		if (temperature < FREEZING){
			cold_days++;
		}
	}

	if(all_days != 0){
		printf("%d days totals: %.1f%% are cold days\n", all_days, 100.0*(float)cold_days/all_days);
	}

	if(all_days == 0){
		printf("No data entered.\n");
	}
	
	return 0;
}
