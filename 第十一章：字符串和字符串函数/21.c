#include <stdio.h>
#define MAX 20

int main(){

    char first[MAX];
    char last[MAX];
    char formal[2*MAX + 10];
    double prize;

    puts("Enter your first name:");
    gets(first);
    puts("Ener your last name:");
    gets(last);
    puts("Enter your prize money:");
    scanf("%lf", &prize);
    sprintf(formal, "%s, %s: $%6.2lf\n", first, last, prize);
    puts(formal);

    return 0;
}