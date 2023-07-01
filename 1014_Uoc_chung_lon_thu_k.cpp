#include <iostream> 
#define MAX 100

using namespace std;

void uocChung (int a[], int &x, int m, int n) {
	int s = m < n ? m : n;
	for (int i = 1; i <= s; i++) {
		if (m % i == 0 && n % i == 0) {
			a[x] = i;
			x++;
		}
	} 
}

void Swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void Sort (int a[], int &x) {
	for (int i = 0; i < x - 1; i++) 
		for (int j = i + 1; j < x; j++) 
			if (a[i] < a[j]) 
				Swap(a[i], a[j]);
}

int main() {
	int a[MAX];
	int x = 0;
	int n, m, k;
	cin >> n >> m >> k;
	uocChung (a, x, m, n);
	Sort (a, x);
	cout << a[k - 1];
	return 0;
}
