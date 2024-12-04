#include <iostream>
#include <string.h>

int main() {
	std::string s;
	std::getline(std::cin, s);
	std::string a = "";
	int b;
	int k = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= '0' && s[i] <= '9') 
			b += s[i] - '0';
		else {
			a[k] = s[i];
			k++;
		}
	}
	for (int i = 0; i < k; i++) 
		std::cout << a[i];
	std::cout << b;	
	return 0;
}
