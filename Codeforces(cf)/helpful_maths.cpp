#include<bits/stdc++.h>
using namespace std;
int main()
{

    //mahmud48

    int n,i,j=0,a[110];
    string s;
    cin>>s;
    for(i=0;i<s.length();i+=2){
        a[j]=s[i]-'0';
        j++;
    }
    sort(a,a+j);
    for(i=0;i<j-1;i++) cout<<a[i]<<'+';
    cout<<a[j-1]<<endl;
//   for(int i=0;i<s.length()/2;i++)
////        cout<<a[i];
      return 0;
}
