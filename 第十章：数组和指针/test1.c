/*
修改程序清单10.7中的程序rain,使它不使用数组下标，而是使用指针进行计算（程序中仍然需要声明并初始化数组）。
*/
#include <stdio.h>
#define MONTHS 12
#define YEARS	5

int main(){

	const float rain[YEARS][MONTHS] = {
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6}, 
                {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
                {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
                {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2}, 
                {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
        };
	
	int year, month;
	const float (*pt)[12];
	pt = rain;
	float subot, total = 0;
	for(year = 0; year < YEARS; year++){
		for(month = 0, subot = 0; month < MONTHS; month++)
//			subot += rain[yaer][month];
//			subot += *(*(pt + year) + month);
			subot += *(*(rain + year) + month);
		printf("%5d %15.1f\n", 2000 + year, subot);
		total += subot;
	}
	
	printf("THe yearly average is %.1f.\n", total/YEARS);
	printf("MONTHLY AVERAGE:\n");
	printf("  Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	
	for(month = 0; month < MONTHS; month++){
		for(year = 0, subot = 0; year < YEARS; year++)
//			subtot += rain[year][month];
//			subot += *(*(pt + year) + month);
			subot += *(*(rain + year) + month);
		printf("%5.1f", subot/YEARS);
	}
	printf("\n");
	return 0;
}
