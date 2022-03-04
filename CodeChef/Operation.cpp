#include<bits/stdc++.h>

using namespace std;

int main(){
        ios::sync_with_stdio(0);cin.tie(nullptr);
    //mahmud48
    long long int T,a,b,c,d,cnt;
    cin>>T;
    while(T--){
        cin>>c>>d;
        a=c,b=d,cnt=0;
        if(a==0 && b==0){
            cout<<"0"<<endl;
            continue;
        }
        else  if(a==b){
            cout<<"1"<<endl;
            continue;
        }
        else if(abs(c-d)%2 == 1){
            cout<<"-1"<<endl;
            continue;
        }
        
        else if(abs(a-b)%2 == 0){
            cout<<"2"<<endl;
            continue;
        }
        
    }
    return 0;
}
