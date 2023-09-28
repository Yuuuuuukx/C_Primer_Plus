/*
利用if else 语句编写程序读取输入，直到#。用一个感叹号代替每个句号，将原有的每个感叹号用两个感叹号代替，最后报告进行了多少次替代。
*/
#include <stdio.h>

int main(){

	int num = 0;
	char ch;
	printf("Please enter some chars.\n");
	while((ch = getchar()) != '#'){
		if(ch == '.'){
			ch = '!';
			num++;
			putchar('!');
		}
		else if(ch == '!'){
			num++;
			putchar('!');
			putchar('!');
		}
		else
			putchar(ch);
	}
	printf("\n");
	printf("total sub %d\n", num);
	return 0;
}
