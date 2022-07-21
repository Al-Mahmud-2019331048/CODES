#include<bits/stdc++.h>
using namespace std;
#define sz 100

int lis[sz];

void building_LIS(int arr[],int n){
    for(int i=0;i<n;i++)
        lis[i]=1;
    
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j] and lis[i]<=lis[j])
                lis[i]=lis[j]+1;
        }
    }
}

void The_Sequence(int arr[],int n){
    int maxi=lis[0],idx=0,rem;
    for(int i=0;i<n;i++){
        if(lis[i]>maxi){
            maxi=lis[i];
            idx=i;
        }
    }

    vector<int>ans;
    ans.push_back(arr[idx]);

    rem=lis[idx]-1; 

    for(int i=idx-1;i>=0;i--){
        if(lis[i]==rem){
            ans.push_back(arr[i]);
            rem--;
        }
    }

    sort(ans.begin(),ans.end());

    cout<<"The LIS array is:"<<endl;

    for(int x: ans)
        cout<<x<<" ";
}


int main()
{
    int n;cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    building_LIS(arr,n);

    for(int i=0;i<n;i++)
        cout<<lis[i]<<" ";
    cout<<endl;

    The_Sequence(arr,n);

    return 0;
}