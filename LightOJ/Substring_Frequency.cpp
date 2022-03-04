#include<bits/stdc++.h>
using namespace std;

#define sp     ' '
#define endl   '\n'
#define all(x) x.begin(), x.end()

void computeLPSArray(string pat, int M, int lps[])
{
	int len = 0;
	int i = 1;
	lps[0] = 0;
	while (i < M)
	{
		if (pat[i] == pat[len])
		{
			len++;
			lps[i] = len;
			i++;
		}
		else
		{
			if (len != 0)
			{
				len = lps[len - 1];

			}
			else
			{
				lps[i] = len;
				i++;
			}
		}
	}
}

int KMPSearch(string pat, string txt)
{
	int M = pat.length();
	int N = txt.length();

	int lps[M];
	int j = 0;

	computeLPSArray(pat, M, lps);

	int i = 0;
	int res = 0;
	int next_i = 0;

	while (i < N)
	{
		if (pat[j] == txt[i])
		{
			j++;
			i++;
		}
		if (j == M)
		{
			j = lps[j - 1];
			res++;
		}

		else if (i < N && pat[j] != txt[i])
		{
			if (j != 0)
				j = lps[j - 1];
			else
				i = i + 1;
		}
	}
	return res;
}
void solve(long long ii)
{
	long long t, m, n, a, b, c, d, e, x, y, z, cnt = 0, cnt1 = 0;
	bool flag = false; string s, s1;

	cin >> s >> s1;
	x = KMPSearch(s1, s);

	cout << "Case " << ii << ": " << x << endl;
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);    cout.tie(NULL);

	int32_t tc;
	cin >> tc; long long x = tc;
	while (tc--)
		solve(x - tc);

	return 0;
}