#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t,n,l,r,d;
    cin>>t;
    while(t--){
        cin>>n;
        std::vector<ll> v(n);
        vector< pair <ll,ll> > vp;
        for (ll i = 0; i < n; ++i)
            cin>>v[i];
        while(v.size()>=1){
            auto maxe=max_element(v.begin(),v.end());
            int pos=maxe-v.begin()+1;
            if(v.size() != pos)
                vp.push_back({pos,v.size()});
            v.erase(maxe);
        }
        
        cout<<vp.size()<<endl;
        for (ll i = 0; i < vp.size(); ++i)
            cout<<vp[i].first<<" "<<vp[i].second<<" "<<"1"<<endl;


    }
    
    return 0;
}
