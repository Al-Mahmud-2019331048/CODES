#include<stdio.h>

typedef struct{
        char *name;
        int acc_no;
        char acc_type;
        float balance;
} record;

main()
{
    void adjust(record *pt);

    record customer={"Smith",3333,'C',33.33};
    printf("%s %d %c %.3f\n",customer.name,customer.acc_no,customer.acc_type,customer.balance);
    adjust(&customer);   /*pass by reference, a structure type pointer
                         passed by a function & observe the value*/
    printf("%s %d %c %.3f\n",customer.name,customer.acc_no,customer.acc_type,customer.balance);
    /*after calling the function adjust, the function chane the value because
    we pass a structure type pointer to the function, & we get the output hanged in the function*/
}

void adjust(record *pt)
{
    pt->name="Jones";
    pt->acc_no=9999;
    pt->acc_type='R';
    pt->balance=99.99;
    return;
}
