#include <stdio.h>

int main() {

    int i=10;
    char ch='A';
    float a=3.14;
    char str[50];
    printf("%d %c %f \n",i,ch,a);
    sprintf(str,"%d",i);
    printf("%s \n",str);
    sprintf(str,"%c",ch);
    printf("%s \n",str);
    sprintf(str,"The value of pi is %.1f",a);
    printf("%s \n",str);

    return 0;
}