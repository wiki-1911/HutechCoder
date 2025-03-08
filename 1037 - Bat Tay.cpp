#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t != 0) {
		long long n;
		cin >> n;
		if (n == 1) cout  << "0\n";
		else {
			long long s;
			if (n % 2 == 0)
				s = (n / 2) * (n - 1); 
			else 
				s = n * ((n - 1) / 2);
			cout << s << "\n";
		}	
		t--;
	}
	return 0;
}
