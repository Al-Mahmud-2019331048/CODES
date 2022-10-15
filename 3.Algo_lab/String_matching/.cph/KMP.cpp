#include<bits/stdc++.h>
using namespace std;

#define mxn 1000

int lps[mxn];

void initLPS(string s)
{
    int i=1,j=0;
    /*
     012345678
     aabaabaaa
     010123120
    */
    lps[0]=0;
    while(i<s.size()){
        // cout<<i<<" "<<s[i]<<" "<<j<<" "<<s[j]<<endl;
        if(s[i]==s[j]){
            lps[i]=j+1;
            i++,j++;
        }
        else{
            if(j!=0) j=lps[j-1];
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}

void KMP(string text,string pat)
{
    int i=0,j=0;

    while(i<text.size() && j<pat.size()){
        if(text[i]==pat[j]) i++,j++;

        if(j==pat.size()){
            cout<<"Pattern fount at "<<i-j<<" position"<<endl;
            j=lps[j-1];
        }

        else if(i<text.size() and text[i]!=pat[j]){
            if(j!=0) j=lps[j-1];
            else i++;
        }
        
    }
    
}


int main()
{
    string text,pat;

    cin>>text>>pat;

    initLPS(pat);
    for(int i=0;i<pat.size();i++)
        cout<<lps[i];
    cout<<endl;
    KMP(text,pat);


    return 0;
}