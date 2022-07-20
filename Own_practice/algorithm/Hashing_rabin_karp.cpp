#include<bits/stdc++.h>
using namespace std;

#define int long long   
const int base = 1231;
const int mod = 1000000000+7;

#define mxn 1000
int POW[mxn], HASH[mxn];

void powInit() {
    POW[0] = 1;
    for (int i = 1; i < mxn; i++) {
        POW[i] = (POW[i - 1] * base) % mod;
    }
}

int initHash(string str) {
    int len = str.size();
    HASH[0] = 0;
    for (int i = 1; i <= len; i++) {
        HASH[i] = (HASH[i - 1] * base + str[i - 1] - 'a' + 1) % mod;
        /*
          1234
          index->   0  1  2    3    4
          HASH[i]-> 0  1  12  123 1234
        */
    //    cout<<HASH[i]<<endl;
    }
     
    return HASH[len];
}

int getHash(int left, int right) {
    int ret, len = right - left + 1;
    ret = (HASH[right] - HASH[left - 1] * POW[len]) % mod;
    /*
    1234
    suppose left =2,right=4
    so our returning value will be 234
    1234-1*1000=234;

    suppose left =3,right=4
    so our returning value will be 34
    1234-12*100=34;
    */
    if (ret < 0) ret += mod;
    return ret;
}

int32_t main()
{
    string text, pat;
    cin >> text >> pat;

    powInit();
    int patHash = initHash(pat);
    int txtHash = initHash(text);
    // cout << txtHash << " " << patHash << endl;

    int left, right;

    for (int i = 0; i < text.size() - pat.size() + 1; i++) {

        left = i + 1, right = i + pat.size();

        auto curHash = getHash(left, right);
        // cout<<"cur: "<<curHash<<endl;

        if (patHash == curHash) {
            //we can match every letter here for sure
            cout << "Match fount at " << i + 1 << " Position" << endl;
        }
    }


    return 0;
}

/*
bababbabba
abba

mississini
issi

ababcbcb
bcb
*/