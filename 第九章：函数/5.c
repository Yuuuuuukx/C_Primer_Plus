#include <stdio.h>

//int imax(int n, int m);

int imax(int n, int m){

        int max;

        if(n < m)
                max = m;
        else
                max = n;
        return max;
}

int main(){
	
	int evil1, evil2;
	//printf("Please enter a pair of integers(q to quit):\n");
	
	//while(scanf("%d %d", &evil1, &evil2) == 2){
		printf("The lesser of %d and %d is %d.\n", 3, 5,  imax(3, 5));
		printf("The lesser of %d and %d is %d.\n", 3, 5,  imax(3.0, 5.0));
		//printf("Please enter a pair of integers(q to quit):\n");
	//}
	
	return 0;
}

