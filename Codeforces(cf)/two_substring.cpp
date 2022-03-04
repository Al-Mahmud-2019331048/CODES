#include<bits/stdc++.h>
using namespace std;
#define ll       long long
#define fastio   {ios_base::sync_with_stdio(false);cin.tie(NULL);}


int main()
{
  string s; 
  cin>>s;
  bool flag = 0, flag1=0;
  for(ll i=0;i<s.size()-1;i++)
  {
      if(s[i]=='A'&&s[i+1]=='B'){
        for(ll j=i+2;j<s.size()-1;j++)
        {
            if(s[j]=='B' && s[j+1]=='A')
            {
                flag = 1;
                break;
            }
        }
      }
      else if(s[i]=='B'&&s[i+1]=='A'){
        for(ll j=i+2;j<s.size()-1;j++)
        {
            if(s[j]=='A' && s[j+1]=='B')
            {
                flag1 = 1;
                break;
            }
        }
      }
  }
  if(flag || flag1){
    cout<<"YES"<<endl;
  }
  else
    cout<<"NO"<<endl;

}
