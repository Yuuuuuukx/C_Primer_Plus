#include <stdio.h>

int main(){
	
	const float MIN = 0.0f;
	const float MAX = 100.0f;
	
	float score;
	float total = 0.0f;
	int n = 0;
	
	float min = MAX;
	float max = MIN;
	
	printf("Enter the score:\n");
	while(scanf("%f", &score) == 1){
		if(score < MIN || score > MAX){
			printf("%.1f is a invalid score, please enter again.\n", score);
			continue;
		}
		printf("Accepting the score %.1f.\n", score);
		min = (score < min) ? score : min;
		max = (score > max) ? score : max;
		total += score;
		n++;
		printf("Enter q to quit.\n");
	}
	if(n > 0){
		printf("Average of %d scores is %.1f.\n", n, total/n);
		printf("MIN = %.1f, MAX = %.1f.\n", min, max);
	}
	else
		printf("No valid scores wered entered.\n");
	
	
	return 0;
}
