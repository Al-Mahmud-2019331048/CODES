#include<bits/stdc++.h>

using namespace std;

//O(sqrt(n))
void factor(int n){
    std::vector<int> v;
    for(int i=2;i*i<=n;i++)   //i<sqrt(n)
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                n/=i;
                //v.push_back(i);
                cnt++;
            }cout<<i<<"^"<<cnt<<",";
        }
        if(n!=1) cout<<n<<"^1"<<endl;

}

//O()


int main()
{
    long long int n;
    cin>>n;
    factor(n);
    return 0;
}
