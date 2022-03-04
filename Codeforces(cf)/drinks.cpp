 #include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,p;
    cin>>n;
    vector<int> v(n);
    
    for (int i = 0; i < n; ++i)
    {
        cin>>p;
        v[i]=p;
    }
    
    double q=0,s;
    for(int i=0;i<n;i++){
        q+=v[i]/(100.0);
    }
    float ans=q*(100.0)/n;
    printf("%.12lf\n",ans);
    return 0;
}
