#include <stdio.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS  100

struct book{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(){
    struct book library[MAXBKS];
    int count = 0;
    int index;

    printf("Please entre the book title, Press [enter] at the strat of line to stop.\n");
    while(count < MAXBKS && gets(library[count].title) != NULL && library[count].title[0] != '\0'){
        printf("Now enter the author.\n");
        gets(library[count].author);
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);
        while(getchar() != '\n')
            continue;
        if(count < MAXBKS)
            printf("Enter the next title.\n");
    }

    if(count > 0){
        printf("Here is the list of your books:\n");
        for(index = 0; index < count; index++){
            printf("%s by %s: $%.2f.\n", library[index].title, library[index].author, library[index].value);
        }
    }   
    else    
        printf("No books? Too bad.\n");

    return 0;
}