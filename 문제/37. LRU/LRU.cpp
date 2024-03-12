#include <bits/stdc++.h>
using namespace std;

int main() {
	int cache_size, workload;
	cin >> cache_size >> workload;
	vector<int> works(workload);
	vector<int> cache(cache_size);

	for (int i = 0; i < workload; i++)
		cin >> works[i];

	for (int i = 0; i < workload; i++) {
		int work = works[i];

		int pos = 0;
		while (pos < cache_size) {
			if (cache[pos++] == work)
				break;
		}

		for (int j = pos - 1; j > 0; j--) 
			cache[j] = cache[j - 1];

		cache[0] = work;
	}

	for (int work : cache)
		cout << work << ' ';

	return 0;
}