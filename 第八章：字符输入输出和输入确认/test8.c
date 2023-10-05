/*
编写一个程序，显示一个菜单，为您提供加法、减法、乘法或除法的选项。获得您的选择后，该程序请求两个数，然后执行
您选择的操作。该程序应该只接受它所提供的菜单选项。它应该使用float类型的数，并且如果用户未能输入数字应允许重新
输入。在除法的情况中，如果用户输入0作为第二个数，该程序应该提示用户输入一个新的值。一个典型的程序运行应该如下所示：
*/
#include <stdio.h>
#include <ctype.h>

void menu();
char get_choice();
char get_first();
float get_float();

int main(){
	char choice;
	float num1 = 0;
	float num2 = 0;
	
	menu();
	
	while((choice = get_choice()) != 'q'){
		printf("Enter first number:");
		num1 = get_float();
		printf("Enter second number:");
		num2 = get_float();
		while(num2 == 0 && choice == 'd'){
			printf("Enter another number without 0.\n");
			num2 = get_float();
		}
		switch(choice){
			case 'a':
				printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
				break;
			case 's':
				printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                                break;
			case 'm':
				printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                                break;
			case 'd':
				printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                                break;
			default:
				printf("Quit.\n");
				break;
		}
		menu();
	}

	printf("Bye!\n");

	return 0;
}

void menu(void){

	printf("Enter the operation or your choice:\n");
	printf("a.add		s.substract\n");
	printf("m.multiply	d.divide\n");
	printf("q.quit\n");
	
}

char get_choice(){
	char ch;
	ch = get_first();
	while(ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q'){
		printf("Please response with a,s,m,d or q\n");
		ch = get_first();
	}
	return ch;
}

char get_first(){

	int input;

	while(isspace(input = getchar()));
	
	while(getchar() != '\n'){
		continue;
	}
	return input;
}

float get_float(){
	
	float num;
	int ch;

	while(scanf("%f", &num) != 1){
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an float number.\n");
		printf("Please enter a float number as 2.4, 1.3e3 or 3.0\n");
	}
	return num;
}
