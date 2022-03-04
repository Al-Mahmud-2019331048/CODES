#include<bits/stdc++.h>

using namespace std;

//O(sqrt(n))
void factor(int n){
    for(int i=2;i*i<=n;i++)   //i<sqrt(n)
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                n/=i;
                cnt++;
            }cout<<i<<"^"<<cnt<<",";
        }
        if(n!=1) cout<<n<<"^1"<<endl;

}

int isPrime(int n)
{
    if(n<2) return 0;
    for(int i=2;i*i<=n; i++)
    {
        if(n%i==0){
            return 0;
            break;
        } 
    }
    return 1;
}


int main()
{
    long long int n;
    cin>>n;
    map<int,int>mp;
    for(int i=2;i<=n+1;i++){
        if(isPrime(i))
            mp[i]=1;
        else
            mp[i]=2;
    }
if(n>2) cout<<"2"<<endl;
else cout<<"1"<<endl;

for (auto i:mp)
{
    cout<<i.second<<" " ;
}
cout<<endl;

}