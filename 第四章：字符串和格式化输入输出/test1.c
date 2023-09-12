/*
编写一个程序，要求输入名字和姓氏，然后以“名字，姓氏”的格式打印。
*/
#include <stdio.h>

int main(){
	char fname[40];
	char lname[40];
	printf("Please enter your first name:\n");
	scanf("%s", fname);
	printf("Please enter your last name:\n");
	scanf("%s", lname);
	printf("%s, %s\n", lname, fname);
	return 0;
}
