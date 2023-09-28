#include <stdio.h>

int main(){
	
	char ch;
	printf("Give me a letter of the alphabet, and I will give you a animals.\n");
	printf("Please enter a letter, type # to end the program.\n");
	while((ch = getchar()) != '#'){
		if(ch == '\n')
			continue;
		switch(ch){
			case 'a':
			case 'A':
				printf("ant\n");
				break;
			case 'b':
			case 'B':
				printf("bee\n");
				break;
			case 'c':
			case 'C':
				printf("cat\n");
				break;
			case 'd':
			case 'D':
				printf("dog\n");
				break;
			default:
				printf("I love all animals\n");
		}
		while(getchar() != '\n')
			continue;
	}
	
	return 0;
}
