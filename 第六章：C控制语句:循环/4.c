#include <stdio.h>

int main(){
	
	const int secret_code = 13;
	int code_entered;
	
	//printf("Please enter the secret code number:\n");
	//scanf("%d", &code_entered);
	
	//while(code_entered != secret_code){
	do{
		printf("Please enter the secret code number:\n");
		scanf("%d", &code_entered);
	}while(code_entered != secret_code);
	printf("Congratulation!\n");

	return 0;
}
