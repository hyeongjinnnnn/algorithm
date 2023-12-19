#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> arr(n + 1, 0);

	// 소인수 분해
	for (int i = 2; i <= n; i++) {
		int num = i;
		int j = 2;
		while (1) {
			if (num % j == 0) {
				arr[j]++;
				num /= j;
			}
			else {
				j++;
			}
			if (num == 1 || j == 6)
				break;
		}
	}

	// 소인수로 2 * 5가 있다면 0이 하나 끝에 추가되었다는 뜻
	cout << ((arr[2] < arr[5]) ? arr[2] : arr[5]);
	return 0;
}