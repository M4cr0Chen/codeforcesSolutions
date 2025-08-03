#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	int n = a.length(), res = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] <= 90) a[i] += 32;
	}
	for (int i = 0; i < n; i++) {
		if (b[i] <= 90) b[i] += 32;
	}
	for (int i = 0; i < n; i++) {
		if (a[i] < b[i]) {
			res = -1;
			break;
		} else if (a[i] > b[i]) {
			res = 1;
			break;
		}
	}
	cout << res << endl;
	return 0;
}
