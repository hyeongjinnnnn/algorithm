#include <bits/stdc++.h>
using namespace std;

bool compare(const int& a, const int& b) {
	if (a > b) 
		return true;
	else 
		return false; 
}

int main() {
	int n, cnt = 0; 
	cin >> n;
	vector<int> scores(n);

	for (int i = 0; i < n; i++)
		cin >> scores[i];

	sort(scores.begin(), scores.end(), compare);

	for (int i = 0; i < n - 1; i++) {
		if (scores[i] != scores[i + 1])
			cnt++;

		if (cnt == 3) {
			cout << scores[i];
			break;
		}
	}

	return 0;
}