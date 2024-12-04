#include <bits/stdc++.h>
#include <algorithm>

typedef long long ll;

using namespace std;

bool type1(int i, int j, int k) {
	if (i == j && j == k)
		return true;
	return false;
}

bool type2(int i, int j, int k) {
	if (i != j && i != k && j != k)
		return true;
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> a;
	long long s = 0;
	for (int i = 0; i < n; i++) {
		int k;	cin >> k;
		a.push_back(k);
	}
	sort(a.begin(), a.end());
	int count1 = 0, count2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (type1(a[i], a[j], a[k])) {
					s += 1;
					continue;
				}
				else if (type2(a[i], a[j], a[k])) {
					count1++;
					continue;
				}
				else {
					count2++;
					continue;
				}
			}
		}
	}
	s += count1 * 3 + count2 * 6;
	cout << s;
	return 0;
}
