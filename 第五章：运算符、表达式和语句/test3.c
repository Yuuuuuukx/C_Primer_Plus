/*
编写一个程序，该程序要求用户输入天数，然后将该值转换为周数和天数。例如，此程序将把18天
转换成2周4天。用下面的格式显示结果：
18 day are 2 weeks. 4 days.
使用一个while循环让用户重复输入天数：当用户输入一个正数（如0或-20）时，程序将终止循环。
*/

#include <stdio.h>
#define DAY_PER_WEEK   7

int main(void){
	int day, week, left;
	printf("Convert days to weeks and days!\n");
	printf("Enter the number of days(<=0 quit):\n");
	scanf("%d", &day);
	
	while(day>0){
		week = day/DAY_PER_WEEK;
		left = day%DAY_PER_WEEK;
		printf("%d days is %d week, %d days.\n", day, week, left);
		printf("Enter the next value.(<=0 quit):\n");
		scanf("%d", &day);
	}
	printf("Done!\n");
	return 0;
}
