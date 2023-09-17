/*
编写一个程序把一个单词读入一个字符数组，然后反向打印出这个词。提示：使用strlen()（第4章）计算数组中最后一个字符的索引。
*/
#include <stdio.h>
#include <string.h>

int main(){
	char str[40];
	int num;
	
	printf("Please enter a word\n");
	scanf("%s", str);
	printf("%d\n", num);
	for(int i = num - 1; i >= 0; i--){
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
