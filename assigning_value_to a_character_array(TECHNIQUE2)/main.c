#include <stdio.h>

typedef struct{
    char *name;
    /*char name[50];  */

}record;
void adjust(record customer);
int main() {
    char *point;
    point= "maria";


    record cust={"smith"};
    adjust(cust);
    return 0;
}
void adjust(record customer)
{
   /* customer.name[50]="Julie"; */
   customer.name="Julie";
   printf(customer .name );
}