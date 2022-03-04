#include<bits/stdc++.h>

using namespace std;



int main()
{
    int a,b,c,d,e=0,f=0;
    cin>>a;
    getchar();
    cin>>b;
    cin>>c;
    getchar();
    cin>>d;
    //cout<<a<<b<<c<<d;
    long long m=(c-a)*60+d-b;
    m=m/2;
    e=a+(m/60);
    f=b+(m%60);
    if(f>=60) e++,f-=60;
    printf("%02d:%02d",e,f);


    return 0;
}
