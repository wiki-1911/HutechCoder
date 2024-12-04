#include <stdio.h>
#include <string.h>

int main() {
	char s[251];
	scanf ("%s", &s);
	int k;
	scanf("%d", &k);
	char a[251], b[251];
	int x = 0, y = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (i <= k - 1) {
			a[x] = s[i];
			x++;
		}
		else {
			b[y] = s[i];
			y++;
		}
	}
	for (int i = strlen(a); i > -1; i--) {
		printf ("%c", a[i]);
	}
	for (int i = strlen(b); i > -1; i--) {
		printf ("%c", b[i]);
	}
	return 0;
}
