/*
1988年United States Federal Tax Schedule是近期最基本的。它分为4类，每类有两个等级。下面是其摘要：美元数为应征税的收入。
种类			税金
单身			前17,850美元按15%，超出部分按28%
户主			前23,850美元按15%，超出部分按28%
已婚，共有		前29,850美元按15%，超出部分按28%
已婚，离异		前14,850美元按15%，超出部分按28%
例如，有20000美元应征税收入的单身雇佣劳动者应缴税金0.15X17850美元+0.28X（20000美元-17850美元）。编写一个程序，让用户指定税金种类
和应征税收入，然后计算税金。使用循环以便用户可以多次输入。
*/
#include <stdio.h>

int main(){
	
	int type;
	double tax, salary;
	printf("type1:\"单身\", type2:\"户主\", type3:\"已婚,共有\", type4\"已婚，离异\"\n");
	printf("Please enter your type and salary(q to quit):\n");
	while(scanf("%d %lf", &type, &salary) == 2){
		switch(type){
			case 1:
				if(salary>17850)
					tax = 17850*0.15 + (salary-17850)*0.28;
				else
					tax = salary*0.15;
				break;
			case 2:
				if(salary>23900)
					tax = 23900*0.15 + (salary-23900)*0.28;
				else
					tax = salary*0.15;
				break;
			case 3:
				if(salary>29750)
					tax = 29750*0.15 + (salary-29750)*0.28;
				else
					tax = salary*0.15;
				break;
			case 4:
				if(salary>14875)
					tax = 14875*0.15 + (salary-14875)*0.28;
				else
					tax = salary*0.15;
				break;
			default:
				printf("Please enter true type!\n");
				printf("Please enter next type salary(q to quit)\n");
				continue;
		}
		printf("tax: %.2lf$\n", tax);
		printf("Please enter next type and salary(q to quit)\n");
	}
	return 0;
}
