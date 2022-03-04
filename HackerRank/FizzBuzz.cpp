#include <bits/stdc++.h>
#define ll long long
using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'fizzBuzz' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void fizzBuzz(int n) {
    if(!(n%5)&&!(n%3)){
        cout<<"FizzBuzz"<<endl;
        return;
    }
    else if(!(n%3) && n%5){
        cout<<"Fizz"<<endl;
    }
    else if(n%3 && !(n%5)){
        cout<<"Buzz"<<endl;
    }
    else{
        cout<<n<<endl;
        return;
    }
    
}

int main()
{
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        fizzBuzz(i);
    }
    
}