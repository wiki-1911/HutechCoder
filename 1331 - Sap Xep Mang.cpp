#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int k;	cin >> k;
		a.push_back(k);
	} 
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) 
		cout << a[i] << " ";
	cout << "\n";
	sort(a.begin(), a.end(), greater<int>());
	for (int i = 0; i < n; i++) 
		cout << a[i] << " ";
	return 0;
}
