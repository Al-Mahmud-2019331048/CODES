#include<bits/stdc++.h>
using namespace std;

int main()
{

    //mahmud48
    int n,d,m,bal=0;
    //n =max_people,d=fine
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>m;
    //m=people present

    if(m>=n){
        for(int i=0;i<n;i++)
            bal+=arr[i];
        bal=bal-(m-n)*d;
    }
    else{
        sort(arr,arr+n);
        for(int i=0;i<m;i++)
            bal+=arr[i];
    }

    cout<<bal<<endl;

    return 0;
}
