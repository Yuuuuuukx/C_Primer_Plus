/*
编写一个程序，创建一个具有26个元素的数组，并在其中存储26个小写字母。并让该程序显示该数组的内容
*/
#include <stdio.h>
#define SIZE 26

int main(){
	char ch[SIZE];
	int i;
	for(i = 0; i < SIZE; i++){
		ch[i]= 'a' + i;
	}
	for (i = 0; i < SIZE; i++){
		printf("%c", ch[i]);
	}
	printf("\n");
	return 0;
}
