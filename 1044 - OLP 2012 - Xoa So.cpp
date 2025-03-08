#include <iostream>

using namespace std;

typedef long long ll;

ll giaiThua(int n) {
	ll s = 0;
	for (int i = 1; i < n; i++) 
		s += n - i;
	return s;
}

ll xoaSo (int a[], int n) {
	int sole = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0) 
			sole++;
	int sochan = n - sole;
	if (sole == 0) {
		ll s2 = giaiThua(sochan);
		return s2;
	}
	else {
		if (sole % 2 != 0) 
			return sole * sochan;
		else {
			if (sochan == sole) {
				ll s1 = giaiThua(sole);
				return s1 * 2;
			}
			ll s1 = giaiThua(sole);
			ll s2 = giaiThua(sochan);
			return s1 + s2; 
		}
	}
}

int main() {
	int n, a[1000];
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	cout << xoaSo(a, n);
	return 0;
} 
