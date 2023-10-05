#include <stdio.h>

int main(){
	
	int guess = 1;
	char response;
	
	printf("Pick an interger from 1 to 100.I will try to guess.\n");
	printf("Respond with 'y' if my guess is right and with 'n' if it is wrong\n");
	printf("Is your number %d?\n", guess);
	
	while((response = getchar()) != 'y'){
		if(response == 'n')
			printf("Well, then, is it %d?\n", ++guess);
		else
			printf("Sorry, I understand only y or n.\n");

		while(getchar() != '\n')
			continue;
	}
	
	printf("I knew i could do it!\n");
	
	return 0;
}
