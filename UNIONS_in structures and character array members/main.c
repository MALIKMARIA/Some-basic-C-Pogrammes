#include <stdio.h>
#include <string.h>

int main() {
    union id{
        char colour[50]="maria"; /* */
        int size; /* integer 4 bytes*/
    };
    struct {
        char manufacture[20];
        float cost;
        union id description;

    }shirt;
    //struct c shirt = {"AMERICA", 50, "maria"};
    /* irrespective of the value assigned or
     * not union only allocates space in the memory
     * for the larger union member*/

    printf("%d \n", sizeof(union id));
    /* will take value of larger data member that is integer so, 4 bytes */

    /*shirt.description.colour="maria" */; // works
    printf("%s %d \n",shirt.description.colour , shirt.description.size );
    /* but the value assigned will be to the colour here */
    printf("%d \n", sizeof(union id));

    /* size won't change even by assigning data to the member */

    shirt.description.size = 1024;
    printf("%s %d \n",shirt.description.colour , shirt.description.size );
    /*  as value is assigned to the size now, it will forget the previous value */
    printf("%d \n", sizeof(union id));




    return 0;
}