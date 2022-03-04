#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

//mahmud48
int fairn(long long n)
{
    long long tmp=n;
    while(tmp){
        
        int r=tmp%10;
        tmp/=10;
        if(r && (n%r != 0)) return 0;
    }
    return 1;
}

int main()
{  
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        while(1){
           if(fairn(n)){
              cout<<n<<endl;
              break;
            }
            else
                n++;
        }
    
   }
    return 0;
}
