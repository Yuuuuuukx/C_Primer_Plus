#include <stdio.h>

long fact(int n);
long rfact(int n);

int main(){
	
	int num;
	
	printf("This program calculattes factorials.\n");
	printf("Please enter  a value in the range 0~12(q to quit):\n");
	
	while(scanf("%d", &num) == 1){
		if(num < 0)
			printf("No negaticve number.\n");
		else if(num > 12)
			printf("Keep input under 13.\n");
		else{
			printf("loop: %d factorial = %ld.\n", num, fact(num));
			printf("recursion: %d factorial = %ld.\n", num, rfact(num));
		}
	}
	
	return 0;
	
}

long fact(int n){
	
	long ans;
	for(ans = 1; n > 1; n--)
		ans *= n;
	return ans;
	
}

long rfact(int n){
	
	//10! = 10*9! = 10*9*8! --> rfact(10) = 10*rfact(9) ---> 10*9*rfact(8)
	long ans;
	if(n > 0)
		ans = n*rfact(n-1);
	else
		ans = 1;
	
	return ans;
}
