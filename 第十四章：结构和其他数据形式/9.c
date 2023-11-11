#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct namect{
    char *fname;
    char *lname;
    int letters;
};

void getinfo(struct namect *pst);
void makeinfo(struct namect *pst);
void showinfo(const struct namect *pst);
void cleanup(const struct namect *pst);

int main(){

    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    cleanup(&person);

    return 0;
}

void getinfo(struct namect *pst){

    char temp[81];
    puts("Please enter your first name:");
    gets(temp);
    pst->fname = (char *)malloc(strlen(temp) + 1);
    strcpy(pst->fname, temp);
    puts("Please enmter your last name:");
    gets(temp);
    pst->lname = (char *)malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);
    
}

void makeinfo(struct namect *pst){
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect *pst){
    printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}

void cleanup(const struct namect *pst){
    free(pst->fname);
    free(pst->lname);
}