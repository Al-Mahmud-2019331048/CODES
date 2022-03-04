#include<stdio.h>

typedef struct{
    int month;
    int day;
    int year;
} date;

typedef struct{
    char name[50];
    char street[50];
    char city[50];
    int acct_no;
    char acct_type;  //C(current),O(overdue),D(delinquent)
    float oldbalance;
    float newbalance;
    float payment;
    date lastpayment;
} record;

record readinput(int i);
void writeoutput(record customer);



int main()
{
    int i,n;
    record customer[100];
    printf("Customer Billing System-INITIALIZATION\n");
    printf("How many customers are there?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        customer[i]=readinput(i);
        if(customer[i].payment>0)
            customer[i].acct_type=(customer[i].payment< 0.1* customer[i].oldbalance) ? 'O' : 'C';
        else
            customer[i].acct_type=( customer[i].oldbalance>0) ? 'D' : 'C';

        customer[i].newbalance=customer[i].oldbalance-customer[i].payment;
    }
    for(i=0;i<n;i++){
        writeoutput(customer[i]);
    }

}


record readinput(int i)
{
    record customer;
    printf("Customer no.  %d\n ",i+1);
    printf("   Name: ");
    scanf("%[^\n]", customer.name);
    printf("   Street: ");
    scanf("%[^\n]",customer.street);
    printf("  City: ");
    scanf("%[^\n]",customer.city);
    printf("  Account number: ");
    scanf("%d",&customer.acct_no);
    printf("  Previous balance: ");
    scanf("%f",&customer.oldbalance);
    printf("  Current payment: ");
    scanf("%f",&customer.payment);
    printf("  Payment date(mm/dd/yy): ");
    scanf("%d /%d /%d\n",&customer.lastpayment.month,&customer.lastpayment.day,&customer.lastpayment.year);
    return(customer);

}

void writeoutput(record customer)
{
    printf("name :  %s\n",customer.name);
    printf("Accoutn no. : %d\n",customer.acct_no);
    printf("Street : %s\n",customer.street);
    printf("City : %s\n",customer.city);
    printf("Old alance : %.2f\n",customer.oldbalance);
    printf("Current payment : %.2f\n",customer.payment);
    printf("New balance : %.2f\n",customer.newbalance);

    switch(customer.acct_type){
    case 'C':
         printf("Current\n");
         break;
    case 'O':
         printf("Overdue\n");
         break;
    case 'D':
         printf("delinquent\n");
         break;
    default:
        printf("Error\n\n");
    }

    return;
}
