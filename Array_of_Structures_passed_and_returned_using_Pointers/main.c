/*   E X A M P L E   11.26
     PASSING ARRAY OF STRUCTURES TO A FUNCTION */


#include <stdio.h>

typedef struct{
    char *name;
    int accno;
    char acctype;
    float acctbalance;

}record;

record *search(record table[],int acctno);
int main()
{
    record customer[3]= {
            {"smith",45,'A',50.0},
            {"jones",46,'B',55.0},
            {"Charlie",47,'C',60.0}
    };
    record *pt;
    printf("Enter account no. to display complete information of customer \n Else enter 0");
    int account_no_to_be_searched;
    scanf("%d",&account_no_to_be_searched );
    while(account_no_to_be_searched != 0)
    {
        pt=search(customer , account_no_to_be_searched );
        printf(pt->name );

    }



    return 0;
}
record *search(record table[],int account_no_to_be_searched )
{
    for(int i=0; i<3; i++)
    {
        if(table[i].accno == account_no_to_be_searched )
            return(&table[i]);
    }

}