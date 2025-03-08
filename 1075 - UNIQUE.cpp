#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> m, m1;
    for (int i = 0; i < n; i++) {
       int k;	cin >> k;
       m[k]++;
       m1[k] = i + 1;
    }
    int y = -1;
	map<int, int>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++) {
    	if (itr->second == 1) {
    		y = itr->first;
    		break;
		}
		else continue;
	}
	if (y == -1) cout << "-1";
	else {
		cout << m1[y];
	}
    return 0;
}
