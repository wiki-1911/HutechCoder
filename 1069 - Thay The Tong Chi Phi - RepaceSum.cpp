#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, k;
	cin >> n >> k;
	vector<ll> a;
	for (int i = 0; i < n; i++) {
		int x;	cin >> x;
		a.push_back(x);
	}
	ll h = 0;
	while (a.size() > k) {
		ll s = 0;
		sort(a.begin(), a.end());
		h += a[k - 1] - a[0];
		for (int i = 0; i < k; i++) 
			s += a[i];
		a.erase(a.begin(), a.begin() + k);
		a.push_back(s);
	}
	ll s = 0;
	h += a[a.size() - 1] - a[0];
	for (int i = 0; i < a.size(); i++) 
		s += a[i];	
	cout << s << "\n" << h;
	return 0;
}
