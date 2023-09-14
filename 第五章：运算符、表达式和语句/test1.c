/*
编写一个程序。将用分钟表示时间转换成以小时和分钟表示时间。使用#define或者const来
创建一个代表60的符号常量。使用while循环来允许用户重复键入，并且当键入一个小于等于0
的时间时终止循环。
*/
#include <stdio.h>
#define MIN_PER_HOUR 60

int main(){
	int min, hour, left;
	
	printf("Convert minutes to hour and minutes!\n");
	printf("Enter the number of minutes (<=0 quit):\n");
	scanf("%d", &min);
	
	while(min>0){
		hour = min/MIN_PER_HOUR;
		left = min%MIN_PER_HOUR;
		
		printf("%d minutes is %d hour, %d minutes.\n", min, hour, left);
		printf("Enter next values.(<=0 quit):\n");
		scanf("%d", &min);
	}
	printf("Done!\n");
	return 0;
}
