#include <bits/stdc++.h>
#define ll long long
#define sz 100000

using namespace std;

ll hist[sz];

ll get_max_area(int n) {
	stack<ll>s;
	ll max_area = 0;
	ll top;  //storing top of stack


	int i = 0;
	while (i < n) {
		if (s.empty() || hist[s.top()] <= hist[i]) {
			s.push(i);
			i++;
		} 
		else {
			top = s.top();
			s.pop();
			ll area;
			if (s.empty()) 
				area = hist[top] * i;
			else 
				area = hist[top] * (i - s.top() - 1);

			//if (max_area < area)
				max_area = max(max_area,area);
		}
	}

	while (!s.empty()) {
		top = s.top();
		s.pop();
		ll area;
		if (s.empty())
			area = hist[top] * i;
		else
			area = hist[top] * (i - s.top() - 1);

		//if (max_area < area)
			//max_area = area;
		max_area = max(max_area,area);

	}

	return max_area;
}


void solve() {
	int n;
	scanf("%d",&n);
	if (n == 0)	return;
	for (int i = 0; i < n; i++)
		scanf("%lld",&hist[i]);
	ll ans = get_max_area(n);
	printf("%lld\n",ans);
}

int main() {
	int T = 1;
	while (T--) {
		solve();
	}
	return 0;
}