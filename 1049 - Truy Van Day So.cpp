#include <bits/stdc++.h>
#include <algorithm>

typedef long long ll;

ll minA(std::vector<ll> a, ll n) {
	int min = a[0];
	for (int i = 0; i < n; i++) 
		if (min > a[i])
			min = a[i];
	return min;
}

ll vtMin(std::vector<ll> a, ll n, int min) {
	for (int i = 0; i < n; i++)
		if (a[i] == min)
			return i;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	std::vector<ll> a;
	ll n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		a.push_back(0);
	}
	ll q;
	std::cin >> q;
	ll b[q][2];
	for (int i = 0; i < q; i++) 
		for (int j = 0; j < 2; j++)
			std::cin >> b[i][j];
	ll k = 0;
	while (k != q) {
		ll r = b[k][0]; 
		ll p = b[k][1];
		ll vt = vtMin(a, r, minA(a, r));
		int y = p % (r - vt);
		int x = p / (r - vt);
		while (p != 0) {
			vt = vtMin(a, r, minA(a, r));
			if (p == y || y == 0) {
				while (p != 0) {
					vt = vtMin(a, r, minA(a, r));
					a[vt]++;
					p--;
				}
			}
			else {
				a[vt] += x;
				p -= x;
				if (p == 0) break;
			}
		}
		k++; 
	}
	for (int i = 0; i < n; i++)
		std::cout << a[i] << " ";
	return 0;
} 
