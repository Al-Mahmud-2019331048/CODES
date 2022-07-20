#include<bits/stdc++.h>
using namespace std;
#define mxn 1000

int lis[mxn];

void building_LIS(int arr[],int n){

    for(int i=0;i<n;i++)
       lis[i]=1;

    for(int i=1;i<n;i++){
        for(int prev=0;prev<i;prev++){
            if(arr[i]>arr[prev] && lis[i]<=lis[prev])
                lis[i]=lis[prev]+1;
        }
    }
}


void The_sequence(int arr[],int n){
    int maxi=lis[0],idx=0,rem;
    for(int i=0;i<n;i++){
        if(lis[i]>maxi)
            maxi=lis[i],idx=i;
    }
    vector<int>v;  //res array
    v.push_back(arr[idx]);
    rem=lis[idx]-1;

    for(int i=idx-1;i>=0;i--){
        if(lis[i]==rem){
            v.push_back(arr[i]);
            rem--;
        }
    }

    sort(v.begin(),v.end());

    cout<<"The LIS is:"<<endl;
    for(int x: v)
        cout<<x<<" ";

}


int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    building_LIS(arr,n);

    for(int i=0;i<n;i++)
        cout<<lis[i]<<" ";
    cout<<endl;

    The_sequence(arr,n);

    return 0;
}

/*
5
5 8 7 1 9


7
2 9 6 7 8 1 9
*/
