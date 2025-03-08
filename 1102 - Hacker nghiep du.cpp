#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;
	std::vector<int> a;	
	for (int i = 0; i < n; i++) {
		int k;
		std::cin >> k;
		a.push_back(k);
	}
	sort(a.begin(), a.end());
	int x = a[0], y = a[1], z = a[n - 1], t = a[n - 2];
	if ((z - x) * (t - y) >= (z - y) * (t - x)) 
		std::cout << (z - x) * (t - y);
	else 
		std::cout << (z - y) * (t - x);
	return 0;
} 
