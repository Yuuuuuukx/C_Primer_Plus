#include <stdio.h>
//#define CHARS 10
//#define ROWS 10

int main(){
	const int chars = 10;
	const int rows = 10;
	char ch;
	int row;
	for(row = 0; row < rows; row++){
		for(ch = ('A' + row); ch < ('A' + chars); ch++){
			printf("%c", ch);
		}
		printf("\n");
	}
	return 0;
}
