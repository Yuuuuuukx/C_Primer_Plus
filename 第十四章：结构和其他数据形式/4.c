#include <stdio.h>
#define LEN 20

struct names{
    char first[LEN];
    char last[LEN];
};

struct guy{
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(){

    struct guy fellow[2] = {
        {
            {"EWEN", "Villard"},
            "grilled salonm",
            "personality coach",
            58112.00,},
        {
            {"Rodney", "Swillbelly"},
            "tripe",
            "tabloid editor",
            232400.00}
    };

    struct guy *him;
    him = &fellow[0];
    printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]);
    printf("address #1: %p #2: %p\n", him, him+1);
    printf("him->income is %.2f\n", him->income);
    printf("(*him).income is %.2f\n", (*him).income);
    printf("him->favfood is %s.\n", him->favfood);
    return 0;
}