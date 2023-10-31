#include <stdio.h>
int count = 0;
void report_count();
extern void accumulate(int k);
int main(){
    int value;
    register int i;

    printf("Enter a positive integer (0 to quit):\n");
    while(scanf("%d", value) == 1){
        count++;
        for(i = value; i >= 0; i--)
            accumulate(i);
        printf("Enter a next positive integer (0 to quit):\n");
    }
    report_count();

    return 0;
}

void report_count(){
    printf("Loop excuted %d times.\n", count);
}