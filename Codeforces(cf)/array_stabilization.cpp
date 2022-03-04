#include<bits/stdc++.h>
using namespace std;
#define sz       200000
#define pb       push_back
#define pi       2*acos(0.0)
#define f        first
#define s        second
#define mod      1000000007
#define fastio   {ios_base::sync_with_stdio(false);cin.tie(NULL);}
const int N = 1e6;

int Gcd(int a,int b){

    int i, gcd;
    for(i=1; i <= a && i <= b; ++i)
    {
        // Checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    return gcd;
}

int main()

{
    int t;
    cin>>t;
        while(t--){
            int n,counter=0;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }

            if(arr[0]==arr[1]==arr[2]==arr[3]==arr[4])
            counter=0;
            return 0;
            for(int i=0;i<n-1;i++)
            {
                arr[i]=Gcd(arr[i],arr[i+1]);
                if(arr[0]==1 && arr[1]==1 && arr[2]==1) break;
                counter++;
            }

        cout<<counter<<endl;
        }
}
