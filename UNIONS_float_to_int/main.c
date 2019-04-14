#include <stdio.h>

int main() {
    float n;
    printf("enter a decimal number");
    scanf("%f",&n);
    int i;
    i= (int)n;
    printf("%d",i);

    if (i==n)   // C takes 45.00 equal to 45 when a float is compared to int
        printf("yes equal");
    else
        printf("nope");
    return 0;
}