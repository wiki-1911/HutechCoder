#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

bool isPrime (ll x) {
	if (x == 2 || x == 3 || x == 5 || x == 7) return true; 
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}

bool checkX(ll x) {
	ll y = sqrt(x);
	double z = sqrt(x);
	if (z - y == 0 && isPrime(y)) return true;
	ll s = 1;
	for (int i = 2; i <= x / 2; i++) {
		if (x % i == 0 && isPrime(i)) {
			cout << i << " "; 
			s *= i;
			if (s >= x) return false;
		}
	}
	if (isPrime(x)) return false;
	return true;
}

int main () {
	ll x;
	cin >> x;
	if (checkX(x)) cout << "YES";
	else cout << "NO";
	return 0;
}
