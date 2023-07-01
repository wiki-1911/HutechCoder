#include <iostream>
#include <math.h> 
#define MAX 100

using namespace std;

void nhapMang(int a[], int t) {
	for (int i = 0; i < t; i++) 
		cin >> a[i];
}

bool checkNam(int a) {	 
	if (a % 100 != 0 && a % 4 == 0 || a % 400 == 0)
		return true;
	return false;
}

void xuatAnswer(int a[], int t) {
	for (int i = 0; i < t; i++)  {
		if (checkNam(a[i]))
			cout << "Yes" << endl;
		else 
			cout << "No" << endl;
	}		
}  

int main() {
	int a[MAX];
	int t;
	cin >> t;
	nhapMang(a, t);
	xuatAnswer(a, t);
	return 0;
} 
