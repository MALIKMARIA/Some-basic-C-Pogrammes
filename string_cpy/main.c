#include <stdio.h>
#include <mem.h>

int main() {


    char m1[]= "MAIRAKHALID";
    printf("I WAS %s \n",m1);
    char m2[]= "MARIAKHALID";

    strncpy(m1,m2,5);
    printf(" I AM %s",m1);

    return 0;
}