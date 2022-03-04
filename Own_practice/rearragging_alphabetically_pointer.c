#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void recorder(int n,char *x[]);
void main()
{
    int i,n=0;
    char *x[10];
    printf("Enter each string on a separate line below (type 'END' when finished)\n");
    //read the list of strings
    do{
        //allocate memory
        x[n]=(char*)malloc(sizeof(char)*12);
        printf("string %d: ",n+1);
        scanf("%s",x[n]);
    }
    while(strcmp(x[n++],"END"));
    recorder(--n,x);
    //display the recorded list of strings
    printf("Recorded list of strings(alphabetically):\n\n");
    for(i=0;i<n;i++)
        printf("String %d: %s \n",i+1,x[i]);

}
void recorder(int n, char *x[])
{
    char *temp;
    int i,item;
    for(item=0;item<n-1;item++){
            //find the lowest of all remaining strings
        for(i=item+1;i<n;i++){
            if(strcmp(x[item],x[i])>0){
               //interchange two strings
                temp=x[item];
                x[item]=x[i];
                x[i]=temp;
            }
        }
    }
    return;
}
