#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> player_skill(n); // �� �������� �Ƿ�

	for (int i = 0; i < n; i++)
		cin >> player_skill[i];

	for (int i = 0; i < n; i++) {
		int rank = 1; // �� �÷��̾��� �ּ��� ���
		
		for (int j = 0; j < i; j++) {
			if (player_skill[i] <= player_skill[j])
				rank++;
		}

		cout << rank << ' ';
	}

	return 0;
}