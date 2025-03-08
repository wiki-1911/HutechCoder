#include <iostream>
#include <string>

int main() {
	std::string s, t;
	int k;
	std::cin >> s;
	fflush(stdin);
	std::cin >> t;
	std::cin >> k;
	int z = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == t[i]) continue;
		else {
			z = -1;
			break;
		}
	}
	if (z == -1) {
		std::cout << "NO\n";
	}
	else {
		if (k == t.size() / s.size() && t.size() % s.size() == 0) std::cout << "YES\n";
		else std::cout << "NO\n";
	}
	return 0;
}
