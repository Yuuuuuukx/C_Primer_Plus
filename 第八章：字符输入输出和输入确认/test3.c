/*
编写一个程序，把输入作为字符流读取，直至遇到EOF。令其报告输入中的大写字母个数和小写字母个数。假设小写字母的数值是连续的，
大写字母也是如此。或者你可以使用ctype.h库中的合适函数来区分大小写。
*/
#include <stdio.h>

int main(){

	int ch;
	int upper_cnt = 0;
	int lower_cnt = 0;
	
	while((ch = getchar()) != EOF){
		if(ch >= 'a' && ch <= 'z')
			lower_cnt++;
		if(ch >= 'A' && ch <= 'Z')
			upper_cnt++;
	}
	printf("upper_cnt : %d, lower_cnt : %d \n", upper_cnt, lower_cnt);

	return 0;
}
