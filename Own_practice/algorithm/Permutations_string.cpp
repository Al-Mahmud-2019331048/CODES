#include<bits/stdc++.h>
using namespace std;

void swap(char *x,char *y)
{
    char tmp=*x;
    *x=*y;
    *y=tmp;
}

// O(n*n!)

void permute(char *s,int l,int r)
{
    int i;
    if(l==r) cout<<s<<endl;

    else{
        for(i=l;i<=r;i++){
            swap(s+l,s+i);
            permute(s,l+1,r);   //recursion
            swap(s+l,s+i);
        }
    }
}

int main()
{
    char str[]="ABC";
    int n=strlen(str);
    permute(str,0,n-1);
    return 0;
}

//tech dose