/*
编写一个程序读入一行输入，然后反向打印该行。您可以把输入存储在一个char数组中；假定该行不超过255个字符。回忆一下，您可以使用
具有%c说明符的scanf()从输入中一次读入一个字符，而且您按下回车键时会产生换行字符（\n)。
*/
#include <stdio.h>
#define SIZE 255
#define LEN 10

int main(){
	
	char str[SIZE];
	int i;

	for(i = 0; i < 10; i++){
		scanf("%c", &str[i]);
	}
	
	for(i = LEN-1; i >= 0; i--){
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}
