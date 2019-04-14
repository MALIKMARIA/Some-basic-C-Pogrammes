#include <stdio.h>
#include <string.h>

int main() {
    char string1[]="JERRY";
    char string2[]={'J','E','R','\0','R','Y','\0'};
    int i;
    i=strcmp(string1 ,string2 );
    printf("%d", i);
    return 0;
}