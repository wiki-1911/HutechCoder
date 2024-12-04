#include <iostream> 

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t != 0) {
		long long k, m;
		cin >> k >> m;
		int x = k / 2, y = k % 2, z = x + y;
		if (k % 2 == 0) {
			long long n = (3 * z) - 1;
			cout << (n * n - 1) % m << " ";
		}
		else {
			long long n = (3 * z) - 2;
			cout << (n * n - 1) % m << " ";
		}
		t--;
	}
	return 0;
}

/* 
	Giả sử xét từ 1 -> 9 thấy, ta thấy có 6 số chính phương trừ đi 1 chia hết cho 3 và 3 số chính phương ko chia hết cho 3. 
3 số đó là những bội của 3: 3, 6, 9.
từ đó ta có thể tìm đc số thứ N3S. Nếu k chẵn thì lấy (3 * z) - 1 là ra số ở vị trí cần tìm. Rùi bình phương số đó lên trừ thêm 1 là ra đấp án.
còn đối vs k lẻ thì lấy (3 * z) - 2.
*/
