#include<bits/stdc++.h>
using namespace std;

int main()
{

    //mahmud48
    int m,n,p,q,a,b,level,flag=0;
    cin>>level>>p;
    int freq[level];
    for(int i=0;i<level;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<p;i++)
    {
        cin>>a;
        freq[a-1]++;
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>b;
        freq[b-1]++;
    }

    for(int i=0;i<level;i++)
    {
        if(freq[i]==0)
        {
            cout<<"Oh, my keyboard!"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"I become the guy."<<endl;
    }
    return 0;
}
