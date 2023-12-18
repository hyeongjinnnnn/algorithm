#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> scores(n);

	for (int i = 0; i < n; i++) 
		cin >> scores[i];

	for (int i = 0; i < n; i++) {
		int rank = 1;

		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;

			if (scores[i] < scores[j])
				rank++;
		}

		cout << rank << ' ';
	}

	return 0;
}
