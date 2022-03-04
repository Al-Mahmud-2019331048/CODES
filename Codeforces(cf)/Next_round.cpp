#include<bits/stdc++.h>
using namespace std;

int main()
{
    //mahmud48
    int n,k,adv=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0)
        adv++;
    }
    cout<<adv<<endl;


    return 0;
}

