#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=0;
    cin>>n;
    while(n--){
        char str[4];
        cin>>str;
//        scanf("\n");
        if(str[1]=='+') x++;
        else x--;
        }
    cout<<x<<endl;
    return 0;
}
