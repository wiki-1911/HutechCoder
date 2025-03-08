#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	long long count = 0;
	for (int i = n - 1; i > -1; i--) {
		if (a[i] == 0) {
			for (int j = i - 1; i > -1; i--) 
				a[j] = 0;
			break;
		}
		if (a[i] <= a[i - 1]) {
			a[i - 1] = a[i] - 1;
		}
		count += a[i];
	}
	cout << count;
	return 0;
}
