#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,l,r;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
//        l=arr[0],r=arr[n-1];
        for(int i=0;i<n;i++)
            for(int j=n-1;j>=0;j--){
            arr[i]=arr[i] & arr[j];
        }

        sort(arr,arr+n);

        cout<<arr[0]<<endl;


    }
    return 0;
}
