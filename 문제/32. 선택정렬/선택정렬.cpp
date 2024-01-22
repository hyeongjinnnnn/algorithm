#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> arr(n);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n - 1; i++) {
		int index = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[index])
				index = j;
		}
		int tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;
	}
	
	for (auto num : arr)
		cout << num << ' ';

	return 0;
}