/*
重写程序清单10.7的程序rain，main()中的主要功能改为由函数来执行。
*/
#include <stdio.h>
#define MONTHS 12
#define YEARS   5

//2000-2004
float total_year(const float arr[][MONTHS], int n);
void average_month(const float arr[][MONTHS], int n);
int main(){
        int year, month;
        float total = 0;

        const float rain[YEARS][MONTHS] = {
                {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6}, 
                {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
                {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
                {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2}, 
                {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
        };

	total  = total_year(rain, YEARS);
	
        printf("The yearly average is %.1f.\n", total/YEARS);

        printf("MONTHLY AVERAGE:\n");
        printf("  Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	average_month(rain, YEARS);

        return 0;
}

float total_year(const float arr[][MONTHS], int n){
	int i, j;
	float total, subtot;
	for(i = 0; i < n; i++){
		for(j = 0, subtot = 0; j < MONTHS; j++){
			subtot += arr[i][j];
		}
		printf("%5d %15.1f\n", 2000 + i, subtot);
		total += subtot;
	}
	return total;
}

void average_month(const float arr[][MONTHS], int n){
	int i, j;
	float subtot;
	for(i = 0; i < MONTHS; i++){
		for(j = 0, subtot = 0; j < n; j++){
			subtot += arr[j][i];
		}
		printf("%5.1f", subtot/n);
	}
	printf("\n");
}
