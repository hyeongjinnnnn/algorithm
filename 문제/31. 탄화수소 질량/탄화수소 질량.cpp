#include <bits/stdc++.h>
using namespace std;

int main() {
	string ch;
	int c = 0, h = 0, pos;
	cin >> ch;

	// Åº¼Ò °¹¼ö ±¸ÇÏ±â
	if (ch[1] == 'H') {
		c = 1;
		pos = 1;
	}
	else {
		int i;
		for (i = 1; ch[i] != 'H'; i++) {
			c = 10 * c + (ch[i] - '0');
		}
		pos = i;
	}

	// ¼ö¼Ò °¹¼ö ±¸ÇÏ±â
	if (ch[pos + 1] == '\0') {
		h = 1;
	}
	else {
		for (int i = pos + 1; ch[i] != '\0'; i++) {
			h = 10 * h + (ch[i] - '0');
		}
	}
	cout << c * 12 + h;

	return 0;
}