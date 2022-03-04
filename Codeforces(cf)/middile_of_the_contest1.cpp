#include<bits/stdc++.h>
#define ll long long
using namespace std;

//mahmud48

int main()
{
    int h1,h2,m1,m2;
    scanf("%d:%d",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    //cout<<h1<<" "<<m1<<endl;
    int m=(h2-h1)*60+m2-m1;
    m/=2;
    int e=h1+(m/60);
    int f=m1+(m%60);
    if(f>=60){
        e++;
        f-=60;
    }
    printf("%02d:%02d\n",e,f);
    return 0;
}
