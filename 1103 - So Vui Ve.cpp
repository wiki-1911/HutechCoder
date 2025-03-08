#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

bool lookFor (int x, vector<int> a) {
	if (a.size() == 0) return true;
	for (int i = 0; i < a.size(); i++) 
		if (a[i] == x) return false;
	return true;
}

int main() {
	int t;
	cin >> t;
	while (t != 0) {
		string s;
		cin >> s;
		vector<int> a;
		while (1) {
			long long x = 0;
			for (int i = 0; i < s.size(); i++) {
				int y = s[i] - '0';
				x += y * y;
			}
			if (lookFor(x, a)) {
				if (x == 1) {
					cout << "YES" << "\n";
					break;
				}
				else {
					ostringstream convert;   
					convert <<  x;      
					s = convert.str();
					a.push_back(x);
				}
			}
			else {
				cout << "NO" << "\n";
				break;
			}
		}
		t--;
	}
	return 0;
}
