#include <iostream>

using namespace std;

void tinhTien(int n) {
	int s = 0;
	if (n == 0) {
		cout << "0";
		return;
	}
	while (n != 0) {
		int a;
		if (n <= 50) {
			a = 0;
			s += (n - a) * 1678;
			n -= n - a;
		}
		else if (50 < n && n <= 100) {
			a = 50;
			s += (n - a) * 1734;
			n -= n - a;
		}
		else if (100 < n && n <= 200) {
			a = 100;
			s += (n - a) * 2014;
			n -= n - a;
		}
		else if (200 < n && n <= 300) {
			a = 200;
			s += (n - a) * 2536;
			n -= n - a;
		}
		else if (300 < n && n <= 400) {
			a = 300;
			s += (n - a) * 2834;
			n -= n - a;
		}
		else if (n > 400) {
			a = 400;
			s += (n - a) * 2927;
			n -= n - a;
		}
	}
	float s1 = s * 0.1;
	int s2 = s * 0.1;
	cout << s1 << " " << s2 << "\n" << s << "\n";
	if (s1 - s2 >= 0.5) s2 += 1;
	cout << s2 + s;
}

int main() {
	int n;
	cin >> n;
	tinhTien(n);
	return 0;
} 
