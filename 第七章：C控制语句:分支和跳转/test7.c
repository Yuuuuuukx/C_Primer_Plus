/*
编写程序，要求输入一周中的工作小时数，然后打印工资总额、税金以及净工资。作如下假设：
	a.基本工资等级=10.00美元/小时
	b.加班（超过40小时）=1.5倍的时间
	c.税率		前300美元为15%
			下一个150美元为20%
			余下的为25%
用#define定义常量，不必关心本例是否符合当前的税法。
*/
#include <stdio.h>
#define s1 10
#define h1 1.5
#define r1 0.15
#define r2 0.2
#define r3 0.25

int main(){
	
	double hours = 0;
	double salary;
	double tax;
	double j_salary;
	
	printf("Please enter time and +time of your week work.\n");
	while(scanf("%lf", &hours) == 1){
		if(hours > 40){
			hours = 40 + h1*(hours-40);
			salary = s1 * hours;
			if(salary >= 450){
				tax = 300*r1 + 150*r2 + (salary-450)*r3;
				j_salary = salary - tax;
			}
			else if(300<=salary<450){
				tax = 300*r1 + (salary- 300)*r2;
				j_salary = salary - tax;
			}
			else{
				tax = salary * r1;
				j_salary = salary - tax;
			}
				
		}
		else{
			salary = hours * s1;
                        if(300 < salary){
                                tax = 300*r1 + (salary- 300)*r2;
                                j_salary = salary - tax;
                        }
                        else{
                                tax = salary * r1;
                                j_salary = salary - tax;
                        }

		}
		printf("您工资总额为：%.2lf， 税金为：%.2lf，净工资为%.2lf.\n", salary, tax, j_salary);
	}
	return 0;
}
