#include<iostream>
#include<bitset>
#include<vector>

using namespace std;

bitset<1000>bs;
vector<int>primes;

void sieve(long long upper_bound)
{
    bs.set();
    bs[0]=bs[1]=0;
    primes.push_back(2);
    for(long long i=3;i<=upper_bound+1;i+=2)
    {
        if(bs[i]){
            for(long long j=i*i;j<=upper_bound+1;j+=i)
                bs[j]=0;
             primes.push_back((int)i);
        }
    }
}

int main()
{
//    vector<int>primes;
    sieve(1000);
    vector<int>::iterator it;
    for(it=primes.begin();it!=primes.end();it++)
    {
        cout<<*it<<"\t";
    }
}
