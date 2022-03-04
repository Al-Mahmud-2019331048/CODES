#include<bits/stdc++.h>

using namespace std;


//mahmud48
int main()
{
    long long int n,beauty;
    cin>>n;
//x2-x-2n=0 eqn solve.

    int i=((1+pow((1+(8*n)),0.5))/2)+1;
    //cout<<i<<endl;
    for(i;i>0;){
        beauty=(pow(2,i)-1)*pow(2,i-1);
        if(n%beauty==0){
            cout<<beauty<<endl;
            break;
        }
        else i--;
    }
    return 0;
}
