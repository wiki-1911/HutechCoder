#include <iostream> 

using namespace std;

int main() {
	int N, F, B;
	cin >>  N >> F >> B;
	int dem = 0;
	if (N % F == 0) {
		cout << "F";
		dem++;
	}
	if (N % B == 0) {
		cout << "B";
		dem++;
	}
	if (dem == 0) 
		cout << "NONE";
	return 0;
}
