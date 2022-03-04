#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    ll m,t;
    cin>>t;
    while(t--){
         ll arr[3];
         cin>>arr[0]>>arr[1]>>arr[2]>>m;
         ll n=arr[0]+arr[1]+arr[2];
         ll maxm=arr[0]-1+arr[1]-1+arr[2]-1;
         ll avg=ceil(n/2.0);
         sort(arr,arr+3);
         ll minm=0;

         if(arr[2]>avg){
            if(n%2==0) 
                minm=(arr[2]-avg)*2-1;
            else
                minm=(arr[2]-avg)*2;
         }
         if(m>=minm && m<=maxm)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
         
   


    return 0;
}