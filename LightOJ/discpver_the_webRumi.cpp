#include <bits/stdc++.h>
using namespace std;

int cnt=1;

void solve() {
	cout<<"Case "<<cnt<<":"<<endl;
	cnt++;
	string a, b;
	stack<string>back,forward;
	back.push("http://www.lightoj.com/");
	while (1) {
		cin >> a;
		if (a == "VISIT") {
			cin >> b;
			back.push(b);
			while(forward.size()){
				forward.pop();
			}
			cout << b << endl;
			continue;
		}
		if (a == "BACK" && back.size()) {
			if (back.size() == 1) {
				cout << "Ignored" << endl;
				continue;
			}
			forward.push(back.top());
			back.pop();
			cout << back.top() << endl;
			continue;
		}

		if (a == "FORWARD") {
			if (forward.size()) {
				cout << forward.top() << endl;
				back.push(forward.top());
				forward.pop();
			}
			else cout << "Ignored" << endl;
		}

		if (a == "QUIT")
			break;
	}

}

int main() {
	int T = 1;
	cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}