#include<bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int find_max_pos(vector<int> v,int n)
{
    int maxi=v[0],posa=0;
    for (int i =1 ; i < n; ++i)
    {
        if(maxi<v[i]){
            posa=i;
            maxi=v[i];
        }
    }
    return posa;
}

int find_min_pos(vector<int> v,int n)
{
    int mini=v[n-1],posb=n-1;
    for (int i =n-2 ; i >= 0; --i)
    {
        if(mini>v[i]){
            posb=i;
            mini=v[i];
        }
    }
    return posb;
}

int main()
{
    int n,move;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin>>v[i];
    int maximum=find_max_pos(v,n);
    //cout<<maximum<<endl;
    int minimum=find_min_pos(v,n);
    //cout<<minimum<<endl;
    move=(maximum-0)+(n-1-minimum);
    if(maximum>minimum)
        cout<<move-1<<endl;
    else
        cout<<move<<endl;

    


    return 0;
}
