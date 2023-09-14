#include <stdio.h>
#define S_PER_M    60
#define M_PER_K    0.62137
#define S_PER_H    3600


int main(){
	double distk, distm;
	int min, sec;
	int time;
	double rate;
	double mtime;
	int mmin, msec;

	printf("This programe converts your time for a metric race\n");
	printf("to a time for running a mile and to your average\n");
	printf("speed in miles per hour.\n");
	
	printf("Please enter in kilometer the distance run.\n");
	scanf("%lf", &distk);
	printf("Next enter the time in minutes and seconds.\n");
	printf("Begin by enter the minutes.\n");
	scanf("%d", &min);
	printf("Now enter the seconds.\n");
	scanf("%d", &sec);
	
	time = min * S_PER_M + sec;
	distm = distk * M_PER_K;
	rate = distm/time * S_PER_H;
	
	mtime  = time/distm;
	mmin = (int)mtime/S_PER_M;
	msec = (int)mtime%S_PER_M;

	printf("Your score: %.2f mph\n", rate);
	printf("Use time %dminutes and %dseconds per mile\n", mmin, msec);

	return 0;
}
