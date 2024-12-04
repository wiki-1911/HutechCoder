#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n; 
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	long long s = 0;
	long long b = a[0] + a[1];
	s += pow(b, 2);
	for (int i = 2; i < n; i++) {
		b += a[i];
		s += pow(b, 2);
	}
	cout << s;
	return 0;
}
