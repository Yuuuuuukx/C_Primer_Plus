#include <stdio.h>
#include <ctype.h>

int main(){
	
	char ch;
	printf("Give me a letter of the alphabet, and I will give you a animals.\n");
	printf("Please enter a letter, type # to end the program.\n");
	while((ch = getchar()) != '#'){
		if(ch == '\n')
			continue;
		ch = tolower(ch);
		switch(ch){
			case 'a':
				printf("ant\n");
				break;
			case 'b':
				printf("bee\n");
				break;
			case 'c':
				printf("cat\n");
				break;
			case 'd':
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
