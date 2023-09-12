#include <stdio.h>

int main(){
	char name[40];
	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello, %s\n", name);
	
	return 0;
}
