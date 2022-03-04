#include <iostream>
using namespace std;
#define sz       200000
#define pb       push_back
#define ll       long long
#define f        first
#define s        second
#define mod      1000000007

int main()
{
    ll n,anton=0,danik=0;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)  cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]=='A') anton++;
        else danik++;
    }
    if(anton>danik)
        cout<<"Anton"<<endl;
    else if(danik>anton)
        cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;


    return 0;
}
