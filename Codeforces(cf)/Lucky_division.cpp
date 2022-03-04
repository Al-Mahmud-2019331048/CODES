#include<bits/stdc++.h>

using namespace std;

/*
bool lucky(int n){
    int r;
    while(n){
        r=n%10;
        n/=10;
        if(r!=4 && r!=7){
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    long long int n;
    cin>>n;
    if(lucky(n))    
        cout<<"YES"<<endl;
    else if(n%4==0 || n%7==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
*/    


//solution 2
vector<int>v ={4,7,44,77,47,74,444,474,447,477};

int main()
{
    int flag=0;
    long long n;
    cin>>n;
    for(int i=0;i<v.size();i++){
        if(n%v[i]==0){
            flag=1;
            break;
        }
    }

    if(flag)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    return 0;
}