#include<bits/stdc++.h>
using namespace std;
#define ll long long

//mahmud48

int main()
{
    int t;
    //cin>>t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,x,y,z,point=0;
        scanf("%d %d %d",&a,&b,&c);
        scanf("%d %d %d",&x,&y,&z);

        for (int i = 0; i < 21; ++i)
        {
            for (int j = 0; j < 21; ++j)
            {
                for (int k = 0; k < 21; ++k)
                {
                    if(i*a+j*b+k*c<=240)
                        point= max(point, i*x+j*y+k*z);
                }
            }
        }
        cout<<point<<endl;

    }
    return 0;
}
