#include<stdio.h>

typedef struct{
        char *name;
        int acc_no;
        char acc_type;
        float balance;
} record;

void adjust(record customer);

int main()
{

    record customer={"Smith",3333,'C',33.33};
    printf("%s %d %c %.3f\n",customer.name,customer.acc_no,customer.acc_type,customer.balance);
    adjust(customer);  /*this function cannot change the value of the structure customer because we
    passed a full structure be the function, & it is a pass by value, any change in an external
    function cannot change the value in main*/
    printf("%s %d %c %.3f\n",customer.name,customer.acc_no,customer.acc_type,customer.balance);

}

void adjust(record cust)
{
    cust.name="Jones";
    cust.acc_no=9999;
    cust.acc_type='R';
    cust.balance=99.99;
//    return;
    return(cust);
                /*this return statement act like pass by reference
                as cust is altering int the function & returning to the main */

}
