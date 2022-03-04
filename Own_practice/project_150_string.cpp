#include<bits/stdc++.h>
#include<string.h>

using namespace std;
int main()
{
    int x,y,z,m,n;
//    c.............
    char ss[100],tt[100],c;
    int i=0;
//    scanf("%[^\n]",ss); //new line pawar ag porjonto print nibe
//    scanf('%['a','b','c']',ss); //a,b,c input nibe,baki kisu nibe na!
//    x=strlen(ss);  //string length ber kora jai
//    puts(ss); //new line dewa lage na.
//    sterev(ss)
//    strcat(ss,tt);  //concatenation kore,,2 ta add kore
//    printf("%s\n",ss);
//    printf("%c\\n",ss); //extra ekta backslash print hbe


//    cpp............
    string s,s1;
    cin>>s;
    s.size();
    s.length();
    cout<<s<<endl;
    cout<<s.substr(0,2)<<endl; //0 to 2 ei porjonto string return korbesubstring return kore
    getline(cin,s1);  //cin ta full s er vitor input hbe
    cout<<s1<<endl;
    cin.ignore();  // ager liner er porer input ta ignore korbe
    reverse(s.begin(),s.end());  //ulta kore dibe ,reverse

    return 0;
}
