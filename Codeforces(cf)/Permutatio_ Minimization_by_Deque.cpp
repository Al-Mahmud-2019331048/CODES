#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin>>v[i];
        deque<int>d;
        d.push_front(v[0]);
        for (int i = 1; i < n; ++i)
        {
            if(v[i]>d.front())
                d.push_back(v[i]);
            else
                d.push_front(v[i]);
        }
        for (int i = 0; i < d.size(); ++i) 
            cout << d[i] << ' ';
        cout<<endl;
    
    }




    return 0;
}
