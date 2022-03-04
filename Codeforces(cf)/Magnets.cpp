#include<bits/stdc++.h>

using namespace std;


//mahmud48
int main()
{  
    long long n,cnt=0;
    int x;
    cin>>n;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        v[i]=x;
    }

    for(int i=0;i<n;i++){
        if(v[i]!=v[i+1])
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
