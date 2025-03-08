#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 1; i < n + 1; i++) 
		cin >> a[i];
	float t = 0, l = 0, hh = 0, sum = 0;
	for (int i = 1; i < n + 1; i++) {
		t += a[i];
		sum += a[i];
		if (i % 5 == 0) {
			hh += t + 0.1 * t;
			t = 0;
		}
	}
	l = hh - sum;
	int x = l;
	if (l == x) cout << x;
	else if (l < 0 && l != x) cout << x - 1;
	else if (l >= x) cout << x;
	return 0;
} 
