#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int s,a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        s=(a+b+c);
        if(s==180 && a!=0 && b!=0 && c!=0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
