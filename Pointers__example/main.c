/* PASSING STRUCTURES THROUGH POINTERS
              C 11 P R O J E C T
 */


#include <stdio.h>
/* Defining a structure using typedef  */
typedef struct {
    char *name;
    int acctno;
    char acctype;
    float balance;
} record ;

record adjust(record cust);
int main()
{
    /* void adjust(record *pt); */
    /* static record customer ={ "Smith", 50, 'A', 50.0 }; */
    record customer ={ "Smith", 50, 'A', 50.0 };
    record *pt;
    printf( "%s %d %c %.1f \n",customer.name ,customer.acctno , customer.acctype , customer.balance );

    /* I will create a function that will re-assign the values to the members
      of structure customer of type record*/
    customer = adjust(customer);
    printf( "%s %d %c %.1f \n",customer.name ,customer.acctno , customer.acctype , customer.balance );

    return 0;
}
record adjust(record cust)
{
    cust.name="jones";
    return cust;
}