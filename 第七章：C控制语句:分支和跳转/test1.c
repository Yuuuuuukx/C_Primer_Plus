/*
编写一个程序。该程序读取输入直到遇到#字符，然后报告读取的空格数目、读取的换行符数目以及读取的所有其他字符数目
*/
#include <stdio.h>

int main(){
	
	char ch;
	unsigned int x = 0, y = 0, z = 0;
	printf("Please enter a char\n");
	while((ch = getchar()) != '#'){
		if(ch == ' '){
			x++;
		}
		else if(ch == '\n'){
			y++;
		}
		else
			z++;
	}
	printf("空格数目为：%d，换行数目为：%d，其他字符数目为：%d\n", x, y, z);
	return 0;
}
