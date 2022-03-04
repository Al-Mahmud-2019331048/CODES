#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,k;
    cin>>n>>k;
    std::vector<ll> v(k);
    for (int i = 0; i < k; ++i) cin>>v[i];
    sort(v.rbegin(),v.rend()); //descending order
    
    ll miw=0,safe=0;
    for (int i = 0; i < k; ++i)
    {
        if(miw<v[i]){
            miw+=(n-v[i]);
            safe++;
        }
        else break;
    }
    cout<<safe<<endl;
}

void solve1(){
    ll n,k,miw=0,safe=0;
        cin>>n>>k;
        //std::vector<ll> v(k);
        priority_queue<ll> p;
        ll x;
        for (int i = 0; i < k; ++i)
        {
            cin>>x;
            p.push(x);
        }
        /*
        if((n-p.top())<=(p.top()-miw)){
            safe++;
        }
        p.pop();
        miw++;

        for (int i = 1; i < k; ++i)
        {
            if((n-p.top())<(p.top()-miw))
                safe++;
            else
                break;
            p.pop();
            miw++;
        }
        */
        for (int i = 0; i < k; ++i)
        {
            if(miw<p.top()){
                miw+=(n-p.top());
                safe++;
            }
            else break;
        }
        cout<<safe<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}