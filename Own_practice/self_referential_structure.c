#include<stdio.h>
#include<malloc.h>
//dinamically memory allocate
struct node
{
    int val;
    struct node *next;
};
void insert(int val,struct node *p)
{
    struct node *cur=(struct node*)malloc(sizeof(struct node)),*temp;
    cur->val=val;
    cur->next=NULL;
    if(p==NULL){
        p=cur;
        return;
    }
    temp=p;
    printf("List: ");
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=cur;
}
void print(struct node *p)
{
    struct node *temp;
        if(p==NULL){
            puts("List Empty!");
             return;
        }
            temp=p;
    while(temp->next!=NULL){
        temp=temp->next;
   printf("%d ",temp->val);
    }
    puts("");
}
int main()
{
    struct node *start=NULL;
    int n,i,x;
    scanf("%d",&n);
    print(start);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        insert(x,start);

    }
    return 0;
}
