#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
    ///mahmud48
    long long int k,n,w,cost,rent;
    cin>>k>>n>>w;

//    for (int i = 0; i < w; ++i)
//    {
//        cost+=k;
//    }
    cost=(w*(w+1)/2)*k;
    rent=cost-n;
    if(rent>=0)
        cout<<rent<<endl;
    else
        cout<<"0"<<endl;

    return 0;
}
