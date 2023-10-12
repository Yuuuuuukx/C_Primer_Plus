/*
编写一个函数。函数的3个参数是一个字符和两个整数。字符参数是需要输出的字符。第一个整数说明了在
每行中该字符输出的个数，而第二个整数指的是需要输出的行数。编写一个调用该函数的程序。
*/
#include <stdio.h>
void chraw(char ch, int i, int j);
int main(){
	char ch;
	int x, y;
	printf("Please enter a character:\n");
        scanf("%c", &ch);
        printf("Please enter two integers:\n");
        scanf("%d%d", &x, &y);
	chraw(ch, x, y);
}

void chraw(char ch, int i, int j){
	for(int k = 0; k < j; k++){
		for(int l = 0; l < i; l++){
			printf("%c", ch);
		}
		printf("\n");
	}
}
