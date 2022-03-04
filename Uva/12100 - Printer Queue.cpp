#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define FAST ios::sync_with_stdio(false);
using namespace std;

int main()
{
    FAST; cin.tie(nullptr);
    ll t,prio,i;
    bool flag=0;
    std::vector<ll> v;
    deque< pair<ll,bool> >d;
    cin>>t;
    while(t--){
        ll n,me;
        cin>>n>>me;
        ll time=0;
        for (i = 0; i < n; ++i)
        {
            cin>>prio;
            v.push_back(prio);
            d.push_back({prio,i==me});
        }
        sort(v.begin(),v.end(),greater<ll>());
        for (i = 0; i < n; )
        {
            prio=d.front().first;
            flag=d.front().second;
            d.pop_front();

            if(prio==v[i]){
                time++;i++;
                if(flag) break;
            }
            else
                d.push_back({prio,flag});
        }
        cout<<time<<endl;
        v.clear(),d.clear();
    }
    return 0;
}