#include<bits/stdc++.h>
#include<set>
using namespace std;

int main()
{
       char s[101];
       cin>>s;
       int n=strlen(s),c=0,c1=0;
       for(int i=0;i<n;i++)
       {
           if(s[i]==s[i+1])
           {
               c++;
               if(c>=6)
               {
                   cout<<"YES"<<endl;
                   break;
               }

           }
           else
        c=0;

   }
   if(c<6)
    cout<<"NO"<<endl;

    return 0;
}
