#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, tmp; cin >> n;
	vector<int> arr(n);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0; j--) {
			if (arr[j] < arr[j - 1]) {
				tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
			else {
				break;
			}
		}
	}

	for (auto i : arr) {
		cout << i << ' ';
	}

	return 0;
}