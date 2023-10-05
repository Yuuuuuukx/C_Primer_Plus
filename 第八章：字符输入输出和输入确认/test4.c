/*
编写一个程序，把输入作为字符流读取，直至遇到EOF。令其报告每个单词的平均字母数。不要将空白字符记为单词中的字母。实际上，
标点符号也不应该计算，但现在不必考虑这一点（如果您想做得好一些，可以考虑用ctype.h系列中的ispunct()函数）。
*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

	int input;
	int words_count = 0;
	int characters_count = 0;
	bool word_flag = false;
	
	printf("Please enter the string:\n");
	while((input = getchar()) != EOF){
		if(!isspace(input) && !ispunct(input)){
			characters_count++;
			if(!word_flag){
				words_count++;
				word_flag = true;
			}
		}
		if(isspace(input) || ispunct(input)){
			word_flag = false;
		}
	}
	printf("%d characters are read.\n", characters_count);
        printf("%d words are read.\n", words_count);
        printf("The average number of each word are %.2f.\n", (float)characters_count/(float)words_count);
	return 0;
}

