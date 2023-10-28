#include <stdio.h>

int main(){

    char * mesg = "Dont't be a fool!\n";
    char * copy;
    copy = mesg;

    printf("%s", copy);
    printf("mesg = %s, &mesg = %p, value = %p.\n", mesg, &mesg, mesg);
    printf("copy = %s, &copy = %p, copy = %p.\n",copy, &copy, copy);
    return 0;
}