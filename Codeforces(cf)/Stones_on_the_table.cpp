#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{

    //mahmud48
    int n,p;
    cin>>n;
    char s[n+1];
    int cnt=0;
    scanf("%s",s);
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1])
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
