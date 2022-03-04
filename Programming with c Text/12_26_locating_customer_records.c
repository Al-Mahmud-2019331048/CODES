#include<stdio.h>

#define N 3
#define NULL 0

typedef struct{
        char *name;
        int acc_no;
        char acc_type;
        float balance;
} record;

record *search(record table[],int acctn);

int main()
{
    record customer[N]={{"Smith",3333,'C',33.33},
                         {"Jones",6666,'O',66.66},
                         {"Brown",9999,'D',99.99}};
    int acctn,j=0,k=0;
    record *pt;
    printf("Customer Account Locator\n");
    printf("To END ,Enter 0 for the accunt number\n");
    printf("Account no:\n");
    scanf("%d",&acctn);

    while(acctn!=0){
        pt=search(customer,acctn);
        if(pt!=NULL){
            printf("Name: %s\n",pt->name);
            printf("Account no: %d\n",pt->acc_no);
            printf("Account Type: %c\n",pt->acc_type);
            printf("Balance: %.3f\n",pt->balance);
        }

        else
            printf("ERROR-Please try again\n\n");
        printf("Account no:\n");
        scanf("%d",&acctn);
    }

    return 0;
}

record *search(record table[N],int acctn)
{
    int i;
    for(i=0;i<N;i++)
        if(table[i].acc_no==acctn)
            return(&table[i]);
    return(NULL);
}
