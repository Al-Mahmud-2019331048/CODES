#include<bits/stdc++.h>

using namespace std;

bool lex(int a[],int b[],int n)
{

    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            return 1;
            }
    }
    return 0;

}
vector<int> a;
vector<int> b;

//mahmud48
int main()
{  
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        while(1){
            if(lex(a,b,n)){
                cout<<cnt<<endl;
                break;
            }

            if(a[i]>=b[i]){
                swap(a[i],a[i+1]);
                cnt++;
                if(lex(a,b,n)){
                    cout<<cnt<<endl;
                    break;
                }
                else
                    continue;

            }
        }
        



        cout<<cnt<<endl;
    }


    return 0;
}
