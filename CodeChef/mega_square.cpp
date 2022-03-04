#include<iostream>
#include<math.h>
using namespace std;

int main()
{
//    ios::sync_with_stdio(0);cin.tie(nullptr);
    int n,a,t,p;
    cin>>t;
    while(t--){
    cin>>n>>a;
    p=sqrt(n);
    cout<<(a*p)<<endl;
    }
    return 0;
}
