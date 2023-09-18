/*
Daphne以10%的单利息投资了100美元（也就是说，每年投资赢得的利息等于原始投资的10%）。Deirdre则以每年5%的复合利息投资了100美元
（也就是说，利息是当前结余的5%，其中包括以前的利息）。编写一个程序，计算需要多少年Deirdre的投资额才会超过Daphne，并且显示出到那时
两个人的投资额。
*/
#include <stdio.h>
#define RATE1 0.1
#define RATE2 0.05

int main(){
	int i = 0;
	double Daphne = 100, Deirdre = 100;
	while(Daphne >= Deirdre){
		Daphne += 100*RATE1;
		Deirdre += Deirdre*RATE2;
		i++;
	}
	
	printf("%d\n", i);
	printf("Daphne %lf, Deirdre %lf\n", Daphne, Deirdre);
	return 0;
}
