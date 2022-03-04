#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,w;
    cin>>n;
    h=int(sqrt(n));
    w=int(n/h);
    cout<<h<<"\t"<<w<<endl;
    return 0;
}
