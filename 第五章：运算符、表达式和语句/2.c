#include <stdio.h>
#define SEC_PER_MIN 60

int main(){	
	int sec, min, left;
	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter tje number of seconds(<=0 to quit)\n");
	scanf("%d", &sec);
	min = sec / SEC_PER_MIN;
	left = sec % SEC_PER_MIN;
	printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
	
	return 0;
}
