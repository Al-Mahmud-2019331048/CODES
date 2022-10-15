#include<bits/stdc++.h>
using namespace std;

void naive_matching(string text, string pattern) {
    int i, j, m, n;
    n = text.size();
    m = pattern.size();
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m && i + j < n; j++) {
            if (text[i + j] != pattern[j]) {
                break; // mismatch found, break the inner loop
            }
        }
        if (j == m) {
            cout << "Match found at " << i + 1 << endl;
        }
    }
}


int main()
{
    string text, pattern;
    cin >> text >> pattern;
    naive_matching(text, pattern);

    return 0;
}