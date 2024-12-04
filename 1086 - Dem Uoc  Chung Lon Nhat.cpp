#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t != 0) {
		int n;
		cin >> n;
		set<long long> b;
		vector<int> a;
		for (int i = 2; i <= n / 2; i++) {
			if (n % i == 0)
				a.push_back(i);
		}
		for (int i = 0; i < a.size() - 1; i++) {
			for (int j = i + 1; j < a.size(); j++) {
				if (a[j] % a[i] == 0) {
					a.erase(a.begin() + j);
					j -= 1;
				}	
			}
		}
		for (int i = 0; i < a.size(); i++) {
			int x = n / a[i];
			for (int j = 2; j <= x; j++) {
				long long k = a[i] * j;
				b.insert(k);
			}
		}
		int x = n - b.size() - a.size();
		cout << x << "\n";
		t--;
	}
	return 0;
}
