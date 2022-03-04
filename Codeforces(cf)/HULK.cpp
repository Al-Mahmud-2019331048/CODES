#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=n;
    for(int i=1;i<=n;){
        if(i%2 && i==1){
            cout<<"I hate ";
            i++;
        } 
        if(i%2==0 && i<=n){
            cout<<"that I love ";
            i++;
        }
        if(i%2 && i<=n){
            cout<<"that I hate ";
            i++;
        }

    }
    cout<<"it"<<endl;
        
    return 0;
}
