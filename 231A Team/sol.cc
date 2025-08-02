#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, res = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int v, count = 0;
		for (int j = 0; j < 3; ++j) {
			cin >> v;
			if (v == 1) count++;
		}
		if (count >= 2) res++;
	}
	cout << res << endl;
	return 0;
}
