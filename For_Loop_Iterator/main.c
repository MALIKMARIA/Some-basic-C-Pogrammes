#include <stdio.h>

int main() {


    printf("values for i++ !\n");
    for(int i=0;i<5;i++)
    {
        printf("%d \n ",i);
    }

    printf("values for ++i !\n");
    for(int j=0;j<5;++j)
    {
        printf("%d \n ",j);
    }

    return 0;
}