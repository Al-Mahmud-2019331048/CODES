#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    ll n;
    cin>>n;
    char s[1001]="";
    for (int i = 1; strlen(s) < n; ++i)
        sprintf(s,"%s%d",s,i);
    putchar(s[n-1]);
    return 0;
}
