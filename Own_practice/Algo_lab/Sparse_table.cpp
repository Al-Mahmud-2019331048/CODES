#include<bits/stdc++.h>
using namespace std;
#define mxn 1000

int table[mxn][mxn];
void rmq(vector<int>arr,int n){
    int h=ceil(log2(n));
    int table[h][n];
    for(int i=0;i<n;i++)
        table[0][i]=arr[i];
    
    for(int lvl=1;lvl<h;lvl++){
        int j=1; if(lvl>1) j*=2;
        for(int i=0;i+j*2-1<n;i++){
            table[lvl][i]=min(table[lvl-1][i] , table[lvl-1][i+j]);
        }
    }
    
}


int main()
{
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    rmq(arr,n);

    for(int lvl=1;lvl<ceil(log2(n));lvl++){
        for(int i=0;i+pow(2,lvl)-1<n;i++){
            cout<<table[lvl][i]<<" ";
        }
        cout<<endl;
    }
    


    return 0;
}

/*
8
9 7 2 6 1 5 6 9


*/
