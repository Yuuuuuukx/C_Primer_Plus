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

    struct guy fellow = {
        {"EWEN", "Villard"},
        "grilled salonm",
        "personality coach",
        58112.00,
    };

    printf("%s\n", fellow.handle.first);
    printf("%s\n", fellow.handle.last);

    return 0;
}