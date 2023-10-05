/*
修改程序清单8.4中的猜测程序，使其使用更智能的猜测策略。例如，程序最初猜50,让其询问用户该猜测值是大、小还是正确。如果
该猜测值小，则令下一次猜测值为50和100的中值，也就是75。如果75大，则下一次猜测值为75和50的中值，等等。使用这种二分搜索
策略，起码如果用户没有欺骗，该程序很快会获得正确答案。
*/
#include <stdio.h>

int main(){

	int guess = 50;
	int high = 100;
	int low = 1;
        char response;

        printf("Pick an interger from 1 to 100.I will try to guess.\n");
        printf("Respond with 'y' if my guess is right and with 'n' if it is wrong\n");
        printf("Is your number %d?\n", guess);

        while((response = getchar()) != 'y'){
                if(response == 'h')
                        high = guess - 1;
                else if(response == 'l')
                        low = guess + 1;
		else 
			printf("Sorry, I understand only 'y', 'h', or 'l'\n");
		guess = (high + low) / 2;
		printf("Is it %d?\n", guess);
                while(getchar() != '\n')
                        continue;
        }

        printf("I knew i could do it!\n");

	return 0;
}

