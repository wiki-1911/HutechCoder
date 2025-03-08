#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	queue<char> b;
	string a;
	getline(cin, a);
	for (int i = 0; i < a.size(); i++) {
		if (b.front() == a[i] && b.back() == a[i + b.size() - 1]) {
			break;
		}
		b.push(a[i]);
	}
	cout << a.size()/b.size();
	while (!b.empty()) {
		cout << b.front();
		b.pop();
	}
	return 0;
}
