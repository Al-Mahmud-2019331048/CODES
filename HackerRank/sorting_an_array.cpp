#include <bits/stdc++.h>
using namespace std;
/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

vector<int> reverseArray(vector<int> a) {
    int n=a.size();
    reverse(a.begin(),a.end());
    return a;
}

int main()
{
   int n;
   cin>>n;
   vector<int> v(n),v1(n);
   for (int i = 0; i < n; ++i)cin>>v[i];
    v1=reverseArray(v);
for (int i = 0; i < n; ++i)
{
    cout<<v1[i]<<" ";
}
cout<<endl;

}
