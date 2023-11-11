#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define LEN 30

enum spectrum{red, orange, yellow, green, bule, violet};
const char *colors[] = {"red", "orange", "yellow", "green", "blue", "violet"};

int main(){
    char choice[LEN];
    enum spectrum color;
    bool color_is_found = false;
    puts("Enter a color (empty line to quit):");
    while(gets(choice) != NULL && choice[0] != '\0'){
        for(color = red; color <= violet; color++){
            if(strcmp(choice, colors[color]) == 0){
                color_is_found = true;
                break;
            }
        }
        if(color_is_found == true){
            switch(color){
                case red: 
                    puts("Roses are red.");
                    break;
                case orange:
                    puts("Poppies are orange.");
                    break;
                case yellow:
                    puts("Sunflowers are yellow.");
                    break;
                case green:
                    puts("Grass is green.");
                    break;
                case bule:
                    puts("Bulebell is bule.");
                    break;
                case violet:
                    puts("Violet are violet.");
                    break;
            }
        }
        else    
            printf("I don't know about the color %s.\n", choice);
        color_is_found = false;
        puts("Next color, please (empty line to quie):");
    }
    puts("GoodBye");
    return 0;
}