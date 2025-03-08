#include <bits/stdc++.h>
#include <algorithm>

typedef long long ll;
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> a;
	long long s = 0;
	for (int i = 0; i < n; i++) {
		int k;	cin >> k;
		a.push_back(k);
	}
	sort(a.begin(), a.end());
	int count1 = 0, count2 = 0;
	ll x = 0;
	for (int i = 0; i < n; i++) {
		ll x1 = a[i] * a[i];
		if (x1 % m == 0 && x1 != x)
				s += 1;
		x = x1;
		ll y = 0;
		for (int j = i + 1; j < n; j++) {
			ll y1 = a[i] * a[j];
//			if (n - i - 1 < 0)
//				break;
			if (y1 % m == 0)
				count1 += 2;
			y = y1;
			ll z = 0;
				for (int k = j + 1; k < n; k++) {
					ll z1 = a[i] * a[j] * a[k];
//					if (n - j - 1 < 1)
//						break;
					if (z1 % m == 0)
						count2 += 1;
					z = z1;
				}
		}
	}
	s += count1 * 3 + count2 * 6;
	cout << s;
	return 0;
}
