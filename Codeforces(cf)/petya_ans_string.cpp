#include<bits/stdc++.h>
#include<set>
#define ll long long
using namespace std;

//mahmud48


int main()
{
    //char sa[105],sb[105];
    string sa,sb;
    cin>>sa;
    //gets("\n");
    cin>>sb;
    for (int i = 0; i < sa.size(); ++i)
    {
        sa[i]=tolower(sa[i]);
        sb[i]=tolower(sb[i]);
    }
    int x=sa.compare(sb);
    if(x>0)
        cout<<1<<endl;
    if(x==0)
        cout<<0<<endl;
    if(x<0)
        cout<<-1<<endl;


    return 0;
}
