#include <stdio.h>
#include <ctype.h>
#include <string.h>

void eatline();
char showmenu();
void ToUpper(char *str);
void ToLower(char *str);
void Transpose(char *str);
void Dummy(char *str);
void show(void(*fp)(char *), char *str);

int main(){

    char line[81];
    void (*pfun)(char *);
    char choice;
    char copy[81];

    puts("Enter a string (empty line to quit):");
    while(gets(line) != NULL && line[0] != '\0'){
        while((choice = showmenu()) != '\n'){
            switch(choice){
                case 'u':pfun = ToUpper;break;
                case 'l':pfun = ToLower;break;
                case 't':pfun = Transpose;break;
                case 'o':pfun = Dummy;break;
            }
            strcpy(copy, line);
            show(pfun, copy);
        }
    }
    puts("Bye!");
    return 0;
}

void eatline(){
    while(getchar() != '\n')
        continue;
}

char showmenu(){
    char ans;
    puts("Enter menu choice:");
    puts("u) upper case           l) lower case");
    puts("t) tranaposed case      o) orignal case");
    puts("n) next string");
    ans = getchar();
    ans = tolower(ans);
    eatline(); 
    while(strchr("ulton", ans) == NULL){
        puts("Please enter a u, l, t, o, n:");
        ans = tolower(getchar());
        eatline();
    }
    return ans;
}

void ToUpper(char *str){
    while(*str){
        *str = toupper(*str);
        str++;
    }
}

void ToLower(char *str){
    while(*str){
        *str = tolower(*str);
        str++;
    }
}

void Transpose(char *str){
    while(*str){
        if(islower(*str)){
            *str = toupper(*str);
        }
        else if(isupper(*str)){
            *str = tolower(*str);
        }
        str++;
    }
}

void Dummy(char *str){

}

void show(void(*fp)(char *), char *str){
    (*fp)(str);
    puts(str);
}

