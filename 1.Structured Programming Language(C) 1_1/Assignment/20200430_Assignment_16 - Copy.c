#include<stdio.h>
#include<malloc.h>
#define sz 1000000
int array[sz],cnt;
struct node
{
    int v;
    struct node *next;

}*start,*pri;
void insert(int x)
{

    struct node *cur,*temp;
   cur=(struct node*)malloc(sizeof(struct node));
    cur->v=x;
    cur->next=NULL;
    if(start==NULL)
    {
        start=cur;
       return;
    }
    temp=start;

    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=cur;
}

void print()
{
struct node *temp;

    if(start==NULL)
    {
        puts("List Emty");
        return;
    }
    temp=start;
    printf("List: ");
    cnt=0;
    while(temp!=NULL)
    {
       /// printf("temp ar address=%d  ",temp);
      ///  printf("temp->next=%d  ",temp->next);
      array[cnt++]=temp->v;
       printf("%d  ",temp->v);
       temp=temp->next;


        }
        /// printf("\ntemp ar address=%d  ",temp);
        puts("");

}
void deletepos(int pos){
    int i;
struct node *temp;
temp=start;

for(i=1;i<=cnt;i++){
   if(i!=pos){
        pri=temp;
    temp=temp->next;
   }
   else if(i==1){
    pri=start;
    start=start->next;
    free(pri);
return;
   }
   else{
    pri->next=temp->next;
   free(temp);
    return;
   }
}
}

void deletestart(){
if(start==NULL){
  puts("Underflow!\n") ;
  return;}
struct node *tem=start;
start=start->next;
free(tem);
}
void deleteval(int val){
int i;
struct node *temp;
temp=start;


for(i=0;i<cnt;i++){
    if(array[i]!=val){
            pri=temp;

       temp=temp->next;
//printf("%d\n",i);
    }
   else if(array[0]==val){
   // pri=start;
    //start=start->next;
  //  free(pri);
   // return;
   deletestart();

   }
   else{
    pri->next=temp->next;
    free(temp);

   }
}


}
int main()
{
  start=NULL;
  int n,i,x;
  scanf("%d",&n) ;
  print() ;
  for(i=0;i<n;i++){
    scanf("%d",&x);
    insert(x);
    print();
  }
  int k;
 printf("Enter possition to delete: ");
 scanf("%d",&k);
 deletepos(k);
   print();
   int val;
   printf("Enter the val: ");
   scanf("%d",&val);
   deleteval(val);
   print();
  return 0;
}

