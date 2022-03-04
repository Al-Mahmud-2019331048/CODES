#include<bits/stdc++.h>
#define sz 3
using namespace std;


int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int a,b;
        cin >> a >> b;
        if(a!=b)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
}
