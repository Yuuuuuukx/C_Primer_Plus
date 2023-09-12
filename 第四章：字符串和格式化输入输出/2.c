#include <stdio.h>
#include <string.h>
#define PRAISE "what a super marvelous name!"

int main(){
	char name[40];

	const int MONTH = 12;

	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello, %s\n", name);
	
	printf("Your name of %ld letters occupies %ld memory\n", strlen(name), sizeof(name));
	printf("The PRAISE has %ld letters\n", strlen(PRAISE));
	printf("The PRAISE occupies %ld memory, \n", sizeof PRAISE);

	return 0;
}
