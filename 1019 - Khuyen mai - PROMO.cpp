#include <iostream>

using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	n -= (n / 4);
	cout << n * t;
	return 0;
} 

// Mua 3 tang 1;
//Thi lay n - (n / (3 + 1));
