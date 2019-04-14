#include <stdio.h>
#include <mem.h>

int main() {

    char st1[]="hello";
    char st2={'a','b','c','\0','d'};
    strcat(st1,st2) ;
    printf("%s",st1);


    return 0;
}