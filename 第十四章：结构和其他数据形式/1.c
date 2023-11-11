#include <stdio.h>
#define MAXTITLE 41
#define MAXAUTL  31

struct book{
    char title[MAXTITLE];
    char author[MAXAUTL];
    float value;
};

int main(){

    struct book library;
    printf("Please enter the book tile.\n");
    gets(library.title);
    printf("Now enter the author.\n");
    gets(library.author);
    printf("Now enter the value.\n");
    scanf("%f", &library.value);

    printf("%s by %s: %.2f\n", library.title, library.author, library.value);
    printf("Done\n");

    return 0;
}