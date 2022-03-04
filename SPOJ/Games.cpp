#include<bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--) {
		float n, extra;
		cin >> n;
		extra = n - (int)n;
		float ex=extra;
		int i = 1;
		if (extra < 0.0001) {
			cout << 1 << '\n';
		}
		else {
			while (1) {
				if (abs(ex - 1) < 0.0001)
					break;
				i++;
				ex = extra * i;
				// cout<<ex<<endl;
			}
			cout << i << '\n';
		}


	}

	return 0;
}
