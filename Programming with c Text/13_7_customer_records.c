#include<stdio.h>
#include<string.h>

#define TRUE 1

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

record readscreen(record customer);
void writefile(record customer);

FILE *fpt;

int main()
{
    int flag=TRUE;
    record customer;
    fpt=fopen("recorda.dat","w+");
    printf("Customer Billing System-INITIALIZATION\n");
    printf("Please enter today's date(mm/dd/yy):\n");
    scanf("%d/%d/%d",&customer.lastpayment.month,&customer.lastpayment.day,&customer.lastpayment.year);
    customer.newbalance=0;
    customer.payment=0;
    customer.acct_type='C';
    while(flag){
        printf("Name(enter \'END\' when finished): ");
        scanf("%[^\n]",customer.name);
        fprintf(fpt,"\n%s\n",customer.name);
        if(strcmp(customer.name,"END")==0)
            break;
        customer=readscreen(customer);
        writefile(customer);
    }
    fclose(fpt);
    return 0;
}

record readscreen(record customer)
{
    printf("Street: ");
    scanf("%[^\n]",customer.street);
    printf("City: ");
    scanf("%[^\n]",customer.city);
    printf("Account number: ");
    scanf("%d",&customer.acct_no);
    printf("Current balance: ");
    scanf("%f",&customer.oldbalance);
    return(customer);

}

void writefile(record customer)
{
    fprintf(fpt,"%s\n",customer.street);
    fprintf(fpt,"%s\n",customer.city);
    fprintf(fpt,"%d\n",customer.acct_no);
    fprintf(fpt,"%c\n",customer.acct_type);
    fprintf(fpt,"%.2f\n",customer.oldbalance);
    fprintf(fpt,"%.2f\n",customer.newbalance);
    fprintf(fpt,"%.2f\n",customer.payment);
    fprintf(fpt,"%d /%d /%d\n",customer.lastpayment.month,customer.lastpayment.day,customer.lastpayment.year);
    return;
}
