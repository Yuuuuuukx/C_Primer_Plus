/*
编写一个程序，首先要求用户输入名字，然后要求用户输入姓氏。在一行打印输入的姓名，在下一行打印每个名字中字母的个数。
把字母个数与相应名字的结尾对齐，如下所示：
Mclissa Honeybee
      7        8
然后打印相同的信息，但是字母个数与相应单词的开始对齐。
*/ 
#include <stdio.h>
#include <string.h>

int main(){
	char fname[40];
	char lname[40];

	printf("Please enter your fname:\n");
	scanf("%s", fname);
	printf("Please enter  your lname:\n");
	scanf("%s", lname);
	
	printf("%-15s %-15s\n", lname, fname);
	printf("%-15ld %-15ld\n", strlen(lname), strlen(fname));

	return 0;
}
