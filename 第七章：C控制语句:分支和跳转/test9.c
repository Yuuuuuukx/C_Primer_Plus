/*
编写一个程序，接受一个整数输入，然后显示所有小于或等于该数的素数。
*/
#include <stdio.h>

int main(){
	
	int num;
	int i, j;
	printf("Please enter a integer num.\n");
	scanf("%d", &num);
	
	for(i = 2; i <= num; i++){
		for(j = 2; j <= i; j++){
			if(i == 2){
				printf("%d\t", i);
				continue;
			}
			else if(i%j == 0)
				break;
			else{
				printf("%d\t", i);
				break;
			}
		}
	}
	printf("\n");
	
	return 0;
}
