/*
编写一个程序，提示用户输入3个数集，每个数集包括5个double值。程序应当实现下列所有功能：
a.把输入信息存储到一个3X5的数组中
b.计算出每个数集（包含5个数值）的平均值
c.计算所有数值的平均数
d.找出这15个数中的最大值
e.打印出结果
每个任务需要用一个单独的函数来实现（使用传统C处理数组的方法）。对于任务b，需要编写计算并返回一维数组平均值的函数，循环3次调用
该函数来实现任务b。对于其他任务，函数应当把整个数组作为参数，并且完成任务c和d的函数应该向它的调用函数返回答案。
*/
#include <stdio.h>
void input(double (*ar)[5], int n);
void show(const double (*ar)[5], int n);
double average(const double *pt, int n);
double total_average(const double (*pt)[5], int n);
double max(const double (*pt)[5], int n);

int main(){
	int i;
	double arr[3][5];
	
	input(arr, 3);
	show(arr, 3);
	for(i = 0; i < 3; i++){
		printf("THe average of array %d is %.2lf.\n", i+1, average(arr[i],5));
	}
	printf("The total average of array is %.2lf.\n", total_average(arr, 3));
	printf("The max value of array is %.2lf.\n", max(arr, 3));
	return 0;
}

void input(double (*ar)[5], int n){
	int i, j;
	for(i = 0; i < n; i++){	
		printf("Please input number array %d:\n", i + 1);
		for(j = 0; j < 5; j++){
			scanf("%lf", &ar[i][j]);
		}
	}
}

void show(const double (*ar)[5], int n){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < 5; j++){
			printf("%5.2lf ", ar[i][j]);
		}
		printf("\n");
	}
}

double average(const double *pt, int n){
	double total = 0;
	int i;
	for(i = 0; i < 5; i++){
		total += *pt++;
	}
	return total/n;
}

double total_average(const double (*pt)[5], int n){
	int i,j;
	double total_all = 0;
	for(i = 0; i < n; i++){
		for(j = 0; j < 5; j++){
			total_all += pt[i][j];
		}
	}
	return total_all/(n*5);
}

double max(const double (*pt)[5], int n){
	int i, j;
	double max = pt[0][0];
	for(i = 0; i < n; i++){
		for(j = 0; j < 5; j++){
			if(max < pt[i][j])
				max = pt[i][j];
		}
	}
	return max;
}
