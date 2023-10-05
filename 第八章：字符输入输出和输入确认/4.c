#include <stdio.h>

void display(char ch, int lines, int with);

int main(){
	
	int ch;
	int rows, cols;
	
	printf("Enter a character an two intergers:\n");
	while((ch = getchar()) != '\n'){
		if(scanf("%d %d", &rows, &cols) != 2){
			printf("Error input, ex(c 5 6)\n");
			printf("Enter a character and two intergers:\n");
			continue;
		}
		display(ch, rows, cols);
		while(getchar() != '\n')
			continue;
		printf("Enter another character and two intergers:\n");
		printf("Enter a new line to quit\n");
	}
	printf("Bye.\n");
	return 0;
}

 void display(char cr, int lines, int width){
	int i,j;
	for(i = 0; i < lines; i++){
		for(j = 0; j < width; j++){
			printf("%c", cr);
		}
		printf("\n");
	}
}
