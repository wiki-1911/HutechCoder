#include <iostream>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	int count = 0; 
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			cout << count << " ";
			count = 0;
			continue;
		}
		count++;
	}
	if (count != 0) 
		cout << count;
	return 0;
} 
