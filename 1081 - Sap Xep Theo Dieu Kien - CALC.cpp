#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> a;
	for (int i = 0; i < 6; i++) {
		int k; std::cin >> k;
		a.push_back(k);
	}
	for (int i = 0; i < 2; i++) {
		sort(a.begin(), a.begin() + 3);
		if (a[0] + a[1] - a[2] == 0)
			std::cout << "yes\n";
		else 
			std::cout << "no\n";
		a.erase(a.begin(), a.begin() + 3);
	}	
	return 0;
}
