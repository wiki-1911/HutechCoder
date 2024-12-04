#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int k;	cin >> k;
		a.push_back(k);
	}
	sort(a.begin(), a.end());
	int max = a[a.size() - 1];
	int s = 0;
	for (int i = 0; i < a.size() - 1; i++) {
		if (a[i] == max) break;
		if ((max - a[i]) % k != 0) {
			cout << "-1";
			return 0;
		}
		else 
			s += (max - a[i]) / k;
	}
	cout << s;
	return 0;
}
