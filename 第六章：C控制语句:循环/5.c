#include <stdio.h>
#define CHARS 10
#define ROWS 10

int main(){
	
	char ch;
	int row;
	for(row = 0; row < ROWS; row++){
		for(ch = 'A'; ch < 'A' + CHARS; ch++){
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}
