#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> arr(n + 1, 0);
	vector<int> num(n + 1, 0);

	// 에라토스테네스의 체를 이용한 소수 찾아놓기
	for (int i = 2; i * i <= n; i++) {
		if (arr[i] == 1)
			continue;

		for (int j = 2 * i; j <= n; j += i) {
			arr[j] = 1;
		}
	}

	/* 각각의 수 소인수 분해 진행 */
	for (int i = 2; i <= n; i++) {
		int number = i;
		for (int j = 2; j <= number; j++) {
			if (arr[j] == 0) {
				while (number % j == 0) {
					number /= j;
					num[j]++;
				}
			}
		}
	}

	/* 결과 출력 */
	cout << n << "! = ";
	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0)
			cout << num[i] << ' ';
	}

	return 0;
}

