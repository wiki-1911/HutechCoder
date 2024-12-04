#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t != 0) {
        int n;
        cin >> n;
        int a[n], b[n] = {0};
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        for (int i = 0; i < n; i++) {
        	vector<int> c;
        	if (b[i] != 0) {
        		cout << b[i] << " ";
        		continue;
			}
            for (int j = i + 1; j < n; j++) {
                if (a[j] == a[i]) {
                    b[i]++;
                    c.push_back(j);
                }
                else if (a[j] > a[i]) break;
            }
            if (c.size() != 0) {
				for (int z = 0; z < c.size(); z++) {
			    	b[c[z]] = b[i];
				}
				c.resize(0);
			}
			cout << b[i] << " ";
        }
        cout << "\n";
        t--;
    }
}
