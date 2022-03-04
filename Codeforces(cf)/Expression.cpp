#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c,l;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    vector<int> v(6);
    v[0]=a+(b*c);
    v[1]=a*(b+c);
    v[2]=a*b*c;
    v[3]=(a+b)*c;
    v[4]=(a*b)+c;
    v[5]=a+b+c;
    sort(v.begin(),v.end());
    l=v.size()-1;
    cout<<v[l]<<endl;
    return 0;
}