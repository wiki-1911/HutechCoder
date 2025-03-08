#include <iostream>

using namespace std;

int main() {
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	int d, r;
	d = a + b - c;
	r = n - d;
	if (r < 1 || d < 2 || a < c || b < c) cout << "-1";
	else cout << r;
	return 0;
}
