/*
设计一个程序，统计从输入到文件尾为止的字符数。
*/

#include <stdio.h>

int main(){
	
	int count = 0;
	int ch;
	
	while((ch = getchar()) != EOF){
		count++;
	}
	
	printf("Characters are %d.\n", count);
	
	return 0;
}
