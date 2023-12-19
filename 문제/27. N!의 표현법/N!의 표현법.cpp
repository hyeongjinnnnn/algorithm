#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> arr(n + 1, 0);
	vector<int> num(n + 1, 0);

	// �����佺�׳׽��� ü�� �̿��� �Ҽ� ã�Ƴ���
	for (int i = 2; i * i <= n; i++) {
		if (arr[i] == 1)
			continue;

		for (int j = 2 * i; j <= n; j += i) {
			arr[j] = 1;
		}
	}

	/* ������ �� ���μ� ���� ���� */
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

	/* ��� ��� */
	cout << n << "! = ";
	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0)
			cout << num[i] << ' ';
	}

	return 0;
}

