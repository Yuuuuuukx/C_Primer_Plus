/*
修改练习7中的假设a，使程序提供一个选择工资等级的菜单。用switch选择工资等级。程序运行的开头应该像这样;
*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1）$8.75/hr		2）$9.33/hr
3）$10.00/hr		4）$11.20/hr
5）quit
*****************************************************************
如果选择1到4,那么程序应该请求输入工作小时数。程序应该一直循环运行，直到输入5.如果输入1到5以外的选项，那么程序
应该提醒用户合适的选项是哪些，然后再循环。用#define为各种工资等级和税率定义常量。
*/
#include <stdio.h>

int main(){

	int level;
	double hours, salary, j_salary, tax;
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1）$8.75/hr             2）$9.33/hr\n");
	printf("3）$10.00/hr            4）$11.20/hr\n");
	printf("5）quit\n");
	printf("*****************************************************************\n");
	printf("Please enter you work level\n");
	while(scanf("%d", &level) == 1){
		switch(level){
			case 1:
				printf("Please enter your work time\n");
				scanf("%lf", &hours);
				if(hours > 40){
					hours = 40 + (hours-40)*1.5;
					salary = hours*8.75;
					if(salary>450){
						tax = 300*0.15 + 150*0.2 + (salary-450)*0.25;
						j_salary = salary - tax;
					}
					else if(300<salary<=450){
						tax = 300*0.15 + (salary-300)*0.25;
						j_salary = salary - tax;
					}
					else{
						tax = salary*0.15;
						j_salary = salary-tax;
					}
				}
				else{
					salary = hours*8.75;
					if(salary>300){
						tax = 300*0.15 + (salary-300)*0.25;
                                                j_salary = salary - tax;
					}
					else{
						tax = salary*0.15;
                                                j_salary = salary-tax;
					}
				}
				break;
			case 2:
				printf("Please enter your work time\n");
                                scanf("%lf", &hours);
                                if(hours > 40){
                                        hours = 40 + (hours-40)*1.5;
                                        salary = hours*9.33;
                                        if(salary>450){
                                                tax = 300*0.15 + 150*0.2 + (salary-450)*0.25;
                                                j_salary = salary - tax;
                                        }
                                        else if(300<salary<=450){
                                                tax = 300*0.15 + (salary-300)*0.25;
                                                j_salary = salary - tax;
                                        }
                                        else{
                                                tax = salary*0.15;
                                                j_salary = salary-tax;
                                        }
				}
                                else{
                                        salary = hours*9.33;
                                        if(salary>300){
                                                tax = 300*0.15 + (salary-300)*0.25;
                                                j_salary = salary - tax;
                                        }
                                        else{
                                                tax = salary*0.15;
                                                j_salary = salary-tax;
                                        }
                                }
                                break;
			case 3:
				printf("Please enter your work time\n");
                                scanf("%lf", &hours);
                                if(hours > 40){
                                        hours = 40 + (hours-40)*1.5;
                                        salary = hours*10.00;
                                        if(salary>450){
                                                tax = 300*0.15 + 150*0.2 + (salary-450)*0.25;
                                                j_salary = salary - tax;
                                        }
                                        else if(300<salary<=450){
                                                tax = 300*0.15 + (salary-300)*0.25;
                                                j_salary = salary - tax;
                                        }
                                        else{
                                                tax = salary*0.15;
                                                j_salary = salary-tax;
                                        }
				}
                                else{
                                        salary = hours*10.00;
                                        if(salary>300){
                                                tax = 300*0.15 + (salary-300)*0.25;
                                                j_salary = salary - tax;
                                        }
                                        else{
                                                tax = salary*0.15;
                                                j_salary = salary-tax;
                                        }
                                }
                                break;
			case 4:
				printf("Please enter your work time\n");
                                scanf("%lf", &hours);
                                if(hours > 40){
                                        hours = 40 + (hours-40)*1.5;
                                        salary = hours*11.20;
                                        if(salary>450){
                                                tax = 300*0.15 + 150*0.2 + (salary-450)*0.25;
                                                j_salary = salary - tax;
                                        }
                                        else if(300<salary<=450){
                                                tax = 300*0.15 + (salary-300)*0.25;
                                                j_salary = salary - tax;
                                        }
                                        else{
                                                tax = salary*0.15;
                                                j_salary = salary-tax;
                                        }
				}
                                else{
                                        salary = hours*11.20;
                                        if(salary>300){
                                                tax = 300*0.15 + (salary-300)*0.25;
                                                j_salary = salary - tax;
                                        }
                                        else{
                                                tax = salary*0.15;
                                                j_salary = salary-tax;
                                        }
                                }
                                break;
			case 5:
				continue;
			default:
				printf("Please enter true number\n");
				continue;
		}
		printf("工资总额为%.2lf，税金为%.2lf，净工资为%.2lf\n", salary, tax, j_salary);
		printf("Please enter next your work level\n");
	}
	return 0;
}
