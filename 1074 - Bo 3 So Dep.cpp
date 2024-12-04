#include <iostream>

using namespace std;

int main() {
	long long a[3], d;
	for (int i = 0; i < 3; i++) 
		cin >> a[i];
	cin >> d;
	int x = 1;
	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (a[i] - a[j] < -d || a[i] - a[j] > d) {
				x = -1;
				break;
			}
		}
		if (x == -1) break;
	}
	if (x == 1) cout << "Yes";
	else cout << "No";
	return 0;
} 
