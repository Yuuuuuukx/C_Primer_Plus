/*
设计函数chline(ch, i, j),实现指定字符在i列到j列的输出，并用一个简单的驱动程序测试该函数
*/
#include <stdio.h>

void chline(char ch, int i, int j);

int main(){
	
	int x, y;
	char ch;
	
	printf("Please enter a character:\n");
	scanf("%c", &ch);
	printf("Please enter two integers:\n");
	scanf("%d%d", &x, &y);
	chline(ch, x, y);
	
}

void chline(char ch, int i, int j){
	int k = 0;
	while(k++ < i)
		printf(" ");
	while(i++ <= j)
		printf("%c", ch);
	printf("\n");
}
