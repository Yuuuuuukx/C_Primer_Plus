#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(){
	
	char ch;
	unsigned long n_chars = 0;
	unsigned long n_lines = 0;
	unsigned long n_words = 0;
	unsigned int p_lines = 0;
	char pre;
	bool inword = false;
	
	while((ch = getchar()) != STOP){
		n_chars++;
		if(ch == '\n')
			n_lines++;
		if(!isspace(ch) && !inword){
			n_words++;
			inword = true;
		}
		if(isspace(ch) && inword){
			inword = false;
		}
		pre = ch;
	}
	if(pre != '\n')
		p_lines = 1;
	
	printf("characters = %lu, lines = %lu, words = %lu.\n", n_chars, n_lines, n_words);
	printf("partial lines = %d\n", p_lines);
	
	return 0;
}
