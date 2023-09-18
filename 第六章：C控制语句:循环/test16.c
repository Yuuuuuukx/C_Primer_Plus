/*
Chuckie Lucky赢了100万美元，他把它存入一个每年赢得8%的账户。在每年的最后一天，Chuckie取出10万美元。编写一个程序，
计算需要多少年Chuckie就会清空他的账户。
*/
#include <stdio.h>

int main(){
	double Chuckie = 1000000;
	int i = 0;
	while(Chuckie >= 0){
		Chuckie += 1000000*0.08;
		Chuckie -= 100000;
		i++;
	}
	printf("%d years after Chuckie is 0\n", i);
	
	return 0;
}
