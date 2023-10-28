#include <stdio.h>
#define DEF "I am #define string."

int main(){

    char str1[80] = "An array was initialized to me.";
    const char *str2 = "A pointer was initialized to me.";
    puts("I'm an argument to pute().");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]);
    puts(str2 + 4);

    return 0;
}