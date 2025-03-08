#include <iostream>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	int x = 1;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] != b[i]) {
			x = -1;
			break;
		}
	}	
	if (x == 1) cout << "Yes";
	else cout << "No";
	return 0;
}
