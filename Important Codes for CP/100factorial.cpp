
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int fact=1;
    for (int i = 1; i <= 100; ++i)
    {
        fact=((fact%97)*(i%97))%97;
        // cout<<fact<<endl;
        //(a*b)%m=((a%m)*(b%m))%m
    }
    cout<<fact<<endl;
    return 0;
}