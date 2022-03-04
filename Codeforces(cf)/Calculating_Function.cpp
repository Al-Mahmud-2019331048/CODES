#include <iostream>
using namespace std;
#define sz       200000
#define ll       long long


int main()
{
    ll n;
    cin>>n;
    if(n%2==0)
        cout<<n/2<<endl;
    else
        cout<<n/2-n<<endl;

    return 0;
}
