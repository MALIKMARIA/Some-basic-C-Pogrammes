#include <stdio.h>
#include <string.h >

int main() {


    char m1[]= "MAIRAKHALID";
    printf("I WAS %s \n",m1);

    char m2[]= "MARIAMALIK";
    char *ptr="maria";

    strcpy(m1,ptr);
    /*  strncpy also takes the null character
     * means jab null character ajae ga usk baad ki chezon ko
     * nhi ly ga wo chahy 'n' ki value bari hi q na di hoi ho */
    printf(" I AM %s",m1);
    int l1=strlen(m1);
    /*printf()*/

    return 0;
}