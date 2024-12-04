#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int h, m, a, b;
	cin >> h >> m >> a >> b;
	int x = b - a;
	if (h + x < 24 && h + x > -24) {
		if (x >= 0) {
			h += x;
		}
		else {
			if (h + x < 0)
				h = 24 + h + x;
			else 
				h += x;
		}
	} 
	else if (h + x == 24 || h + x == -24)
		h = 0;	
	else if (h + x > 24 || h + x < -24){
		if (x > 0)
			h = x - 24 + h;
		if (x < 0)
			h = 24 + x + h; 
	} 
	cout << h << " " << m; 
	return 0;
} 
