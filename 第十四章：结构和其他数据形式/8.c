#include <stdio.h>
#include <string.h>
struct namect{
    char fname[20];
    char lname[20];
    int letters;
};

struct namect getinfo();
struct namect makeinfo(struct namect info);
void show_info(const struct namect *pst);

int main(){

    struct namect person;

    person = getinfo();

    person = makeinfo(person);

    show_info(&person);

    return 0;
}

struct namect getinfo(){
    struct namect temp;
    puts("Please enter your first name:");
    gets(temp.fname);
    puts("Please enter your last name:");
    gets(temp.lname);
    return temp;
}

struct namect makeinfo(struct namect info){
    info.letters = strlen(info.fname) + strlen(info.lname);
    return info;
}

void show_info(const struct namect *pst){
    printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}