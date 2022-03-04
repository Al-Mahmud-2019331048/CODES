#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n,k,t;
    while(1){
        cin>>n;
        if(n==0) return 0;

        std::vector<int> v(n);
        std::vector<int> cost;
        for (int i = 0; i < n; ++i)
            cin>>v[i];
        sort(v.begin(),v.end());
        int ans=0,sum=0;
        sum=v[0]+v[1];
        cost.push_back(sum);
        for (int i = 2; i < n; ++i)
        {
            sum+=v[i];
            cost.push_back(sum);
        }
        for (int i = 0; i < cost.size(); ++i)
            ans+=cost[i];
        cout<<ans<<endl;
    }




    return 0;
}
