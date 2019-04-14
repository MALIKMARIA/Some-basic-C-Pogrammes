
/* PASSING A COMPLETE STRUCTURE TO A FUNCTION
              C 99 P R O J E C T
 */



#include <stdio.h>
/* Defining a structure using typedef  */
typedef struct {
    char *name;
    int acctno;
    char acctype;
    float balance;
} record ;

void adjust(record cust);
int main()
{
    /* void adjust(record *pt); */
    /* static record customer ={ "Smith", 50, 'A', 50.0 }; */
    record customer ={ "Smith", 50, 'A', 50.0 };
    record *pt;
    printf( "%s %d %c %.1f \n",customer.name ,customer.acctno , customer.acctype , customer.balance );

    /* I will create a function that will re-assign the values to the members
      of structure customer of type record*/
    adjust(customer); /* changes made in this function are limited to the function only*/
    printf( "%s %d %c %.1f \n",customer.name ,customer.acctno , customer.acctype , customer.balance );

    return 0;
}
void adjust(record cust)
{

    cust.name="jones";
    printf( "%s %d %c %.1f \n",cust.name ,cust.acctno , cust.acctype , cust.balance );

}