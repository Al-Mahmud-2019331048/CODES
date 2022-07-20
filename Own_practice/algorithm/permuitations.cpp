#include<bits/stdc++.h>
using namespace std;

const int r=4;
bool vis[r+1];
vector<int>order;

void backtrack(){
    if(order.size()==r){
        for(auto x:order)
            cout<<x<<"  ";
        cout<<endl;
        return;
    }
    
    for(int i=1;i<=r;i++){
        if(vis[i]==false){
            order.push_back(i);
            vis[i]=true;

            backtrack();
            order.pop_back();
            vis[i]=false;
        }
    }
}


int main()
{
    int n;
    backtrack();
    return 0;
}