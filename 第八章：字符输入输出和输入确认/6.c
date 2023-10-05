#include <stdio.h>

char get_choice();
char get_first();
void count();
int get_int();

int main(){
	
	char choice;
	while((choice = get_choice()) != 'q'){
		switch(choice){
			case 'a':
				printf("Buy low ,sell hight.\n");
				break;
			case 'b':
				printf("\n");
				break;
			case 'c':
				count();
				break;
			default:
				printf("Programe error!\n");
		}
	}
	return 0;
}

char get_choice(){
	
	char ch;
	
	printf("Enter the letter of your choice:\n");
	printf("a.advice	b.bell\n");
	printf("c.count		q.quit\n");
	
	ch = get_first();
	while((ch < 'a' || ch > 'c') && (ch != 'q')){
		printf("Please respond with a,b,c or q.\n");
		ch = get_first();
	}
	return ch;
}

char get_first(){
	char ch;
	ch = getchar();
	while(getchar() != '\n')
		continue;
	return ch;
}

void count(){
	int n, i;
	printf("Count how far? Enter an integer:\n");
	n = get_int();
	for(i = 1; i <= n; i++){
		printf("%d", i);
	}
	while(getchar() != '\n')
		continue;
	printf("\n");
}

int get_int(){
	int input;
	char ch;
	
	while(scanf("%d", &input) != 1){
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an interger.\n");
	}
	return input;
}

