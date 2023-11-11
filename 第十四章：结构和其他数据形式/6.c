#include <stdio.h>
#define FUNDLEN 50

struct funds{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(struct funds money);

int main(){

    struct funds stan = {
        "Garlic-Melon Bank",
        3024.72,
        "Luck's Saving and loan",
        9237.11
    };

    printf("Stan has a total of $%.2lf.\n", sum(stan));

    return 0;
}

double sum(struct funds money){
    return (money.bankfund + money.savefund);
}