#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t != 0) {
		int count = 0;
		int m, n;
		cin >> m >> n;
		if (m == 1) cout << "1\n";
		else {
			if (n % 3 != 0) count += (n / 3) * 2 + 1;
			else count += (n / 3) * 2;
			cout << count << "\n";
		}
		t--;
	}
	return 0;
}
