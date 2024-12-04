#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string a;
	getline(cin, a);
	int s = 0; 
	int count = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == 'N') {
//			cout <<  a[i] << " " << count << "\n"; 
			if (count == 0) continue;
			for (int i = 1; i <= count; i++)
				s += i;
			count = 0;
		}
		else if (a[i] == 'C') {
			count++;
		}
	}
	if (count != 0) {
		for (int i = 1; i <= count; i++)
				s += i;
	}
	cout << s;
	return 0;
}
