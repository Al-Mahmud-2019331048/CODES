#include<bits/stdc++.h>

using namespace std;

int main(){
        ios::sync_with_stdio(0);cin.tie(nullptr);
    //mahmud48
    long long int T,N,S,K;
    cin>>T;
    while(T--){
        cin>>N>>K>>S; 
        long long int sum=0,l=-1;
        for(int i=0;i<N;i++){
           
            l+=2;
            sum+=l;

        }
        S=S-sum;
        K-=1;
        cout<<S/K<<endl;

    }
    return 0;
}
