#include <stdio.h>
#include <stdlib.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS  10

struct book{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(){

    FILE *pbooks;
    int count = 0;
    struct book library[MAXBKS];
    int index, filecount;

    if((pbooks = fopen("book.dat", "a+b")) == NULL){
        puts("Can not open book.dat.\n");
        exit(EXIT_FAILURE);
    }
    rewind(pbooks);

    while(count < MAXBKS && fread(&library[count], sizeof(struct book), 1, pbooks) == 1){
        if(count == 0)
            puts("Current contents of book.dat:");
        printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
        count++;
    }
    filecount = count;
    if(count == MAXBKS){
        puts("The book.dat file is full.");
        exit(1);
    }
    puts("Please add new book title.Press [enter] at the strat of a line to stop.");
    while(count < MAXBKS && gets(library[count].title) != NULL && library[count].title[0] != '\0'){
        puts("Now enter the author:");
        gets(library[count].author);
        puts("Now enter the value:");
        scanf("%f", &library[count].value);
        count++;
        while(getchar() != '\n')
            continue;
        if(count < MAXBKS)
            puts("Enter the next tile:");
    }

    if(count > 0){
        puts("Here is the list of your books:");
        for(index = 0; index < count; index++)
            printf("%s by %s: $%.2f.\n", library[index].title, library[index].author, library[index].value);
        fwrite(&library[filecount],sizeof(struct book),count - filecount,pbooks);
    }
    else    
        puts("No books? Too bad.\n");
    puts("Bye.\n");
    fclose(pbooks);
    return 0;
}