#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cnt = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int num = i;
		while (num > 0) {
			if (num % 10 == 3)
				cnt++;
			num /= 10;
		}
	}

	cout << cnt;
	return 0;
}