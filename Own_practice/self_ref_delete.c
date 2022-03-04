#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node *next;
}*start;

void insert(int val)
{
    struct node *cur = (struct node*)malloc(sizeof(struct nde)),*temp;
    cur->val=val;
    cur->next=NULL;
    if(start==NULL)
    {
        start=cur;
        return;
    }
    temp=start;
    while(temp->next!=NULL) temp=temp->next;
    temp->next=cur;
}
void deletestart()
{
    if(start==NULL)
    {
        puts("Underflow!")
        return;
    }
    struct node *temp =start;
    start=start ->next;
    free(temp);
}
