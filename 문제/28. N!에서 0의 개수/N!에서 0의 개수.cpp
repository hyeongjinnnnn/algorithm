#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> arr(n + 1, 0);

	// ���μ� ����
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

	// ���μ��� 2 * 5�� �ִٸ� 0�� �ϳ� ���� �߰��Ǿ��ٴ� ��
	cout << ((arr[2] < arr[5]) ? arr[2] : arr[5]);
	return 0;
}