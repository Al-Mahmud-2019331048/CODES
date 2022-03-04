#include<bits/stdc++.h>

using namespace std;


//mahmud48
int main()
{  
    long long int n,k,i,j;
    cin>>n>>k;
    if(n%2==0){
        if(k<=(n/2)){
            cout<<2*k-1<<endl;
        }
        else{
            i=k-(n/2);
            cout<<2*i<<endl;
        }
    }
    if(n%2!=0){
        if(k<=ceil((n*1.0)/2)){
            cout<<2*k-1<<endl;
            //cout<<"test1"<<endl;
        }
        else{
            j=k-ceil((n*1.0)/2);
            //cout<<ceil(7/2)<<endl;
            //cout<<j<<endl;
            cout<<2*j<<endl;
            //cout<<"test2"<<endl;
        }
    }



    return 0;
}
