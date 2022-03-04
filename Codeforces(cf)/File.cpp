#include<bits/stdc++.h>
using namespace std;

int main()
{
    //mahmud48
    int m,a,b,c,cnt=0;
    cin>>m;
    while(m--){
        cin>>a>>b>>c;
        if(a+b+c>1)
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}

