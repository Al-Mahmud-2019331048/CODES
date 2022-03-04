#include<bits/stdc++.h>

/*using namespace std;

map< string, int  > m;

int main()
{
   
    string goru;
   
    while( cin >> goru ) {
        if( goru == "moro" ) break;
        m[ goru ] ++;
        cout << goru <<" ase " << m[ goru ] << " ta :D " << endl;       
    }

}
*/
   

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    mp[1]=1;
    mp[3]=3;
    mp[40]=4;
    mp[2]=2;

    for( auto x : mp )
        cout << x.first << ' ' << x.second << endl;

    for( auto it = mp.begin() ; it !=mp.end() ; it++)
        cout << it->first << " "<< it->second<<endl;
    // key , value 
    
    return 0;
}
