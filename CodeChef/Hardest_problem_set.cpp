#include<bits/stdc++.h>

using namespace std;

int main(){
        ios::sync_with_stdio(0);cin.tie(nullptr);
    //mahmud48
    long long int T,a,b,c,d;
    cin>>T;
    while(T--){
        cin>>a>>b>>c;
        d = min({a,b,c});
        if (d==a) cout<<"Draw"<<endl;
        else if (d==c) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}
