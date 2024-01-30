#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, tmp; cin >> n;
	vector<int> arr(n);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > 0 && arr[j + 1] < 0) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp; 
			}
		}
	}

	for (auto num : arr) 
		cout << num << ' ';

	return 0;
}