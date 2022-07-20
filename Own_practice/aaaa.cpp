#include<bits/stdc++.h>
using namespace std;
#define mxn 1000

vector<int>ans;
bool taken[mxn];

void combination(int n){
    if(ans.size()==2){
        for(auto x: ans)
            cout<<x<<" ";
        cout<<endl;
    }

    for(int i=1;i<=n;i++){
        if(taken[i]) continue;

        ans.push_back(i);
        taken[i]=true;

        combination(n);

        ans.pop_back();
        taken[i]=false;

    }
}

int main()
{
    int n; cin>>n;

    combination(n);

    return 0;
}