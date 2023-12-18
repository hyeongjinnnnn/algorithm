#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> player_skill(n); // 각 선수들의 실력

	for (int i = 0; i < n; i++)
		cin >> player_skill[i];

	for (int i = 0; i < n; i++) {
		int rank = 1; // 각 플레이어의 최선의 등수
		
		for (int j = 0; j < i; j++) {
			if (player_skill[i] <= player_skill[j])
				rank++;
		}

		cout << rank << ' ';
	}

	return 0;
}