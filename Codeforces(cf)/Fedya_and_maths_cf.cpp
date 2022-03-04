#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    long long x,n;
    cin >> s1;
	s2 += '0';
	s2 += s1;

	s1 = s2;
	n = s1.size();
	x = (s1[n - 2] - '0' ) * 10 + s1[n - 1] - '0';
	//cout << x << endl;

	if (x % 4 == 0)
	{
		cout << "4\n";
	}
	else
	{
		cout << "0\n";
	}
}
