#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void maxK(vector<int> a, int k) {
	sort(a.begin(), a.end(), greater<int>());
	if (k > a.size()) {
		cout << "Not Found";
		return;
	}
	cout << a[k - 1];
}

int main() {
	int n;
	cin >> n;
	int k;
	cin >> k;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int k;	cin >> k;
		a.push_back(k);
	}
	maxK(a, k);
	return 0;
}
