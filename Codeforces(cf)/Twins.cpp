#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    int i,j,me=0,total=0;
    for(i=0;i<n;i++)
        total+=v[i];
    total=ceil(total/2);
    for(j=n-1;j>=0;j--){
        me+=v[j];
        if(me>total)
            break;
    }

    cout<<n-j<<endl;

    return 0;
}
