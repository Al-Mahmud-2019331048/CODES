#include<bits/stdc++.h>
using namespace std;
#define sz 100

int lps[sz];

void initLPS(string s){
    int i=1,j=0;
    lps[0]=0;

    while(i<s.size()){
        if(s[i]==s[j]){
            lps[i]=j+1;
            i++,j++;
        }
        else{
            if(j!=0) j=lps[j-1];
            else{
                lps[i]=0; i++;
            }
        }
    }
}

void kmp(string txt,string pat)
{
    int i=0,j=0;

    while(i<txt.size() and j<pat.size()){
        if(txt[i]==pat[j]) i++,j++;

        if(j==pat.size()){
            cout<<"Match found at "<<i-j<<" position"<<endl;
            j=lps[j-1];
        }

        else if(i<txt.size() and pat[j]!=txt[i]){
            if(j!=0) j=lps[j-1];
            else i++;
        }
    }
}

int main()
{
    string txt,pat;
    cin>>txt>>pat;

    initLPS(pat);

    kmp(txt,pat);

    return 0;
}