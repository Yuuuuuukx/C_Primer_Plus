#include <stdio.h>
#include <string.h>

#define LISTSIZE 5

int main(){

    int i, cnt = 0;
    char *list[LISTSIZE] = {
        "astronomy", "astounding", "astrohysics", "ostracize",
        "asterism"
    };
    
    for(i = 0; i < LISTSIZE; i++){
        if (strncmp(list[i], "astro", 5) == 0){
            printf("Found: %s.\n", list[i]);
            cnt++;
        }
    }
    printf("The list contained %d words begining with astro.\n", cnt);
    return 0;
}