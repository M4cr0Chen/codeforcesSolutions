#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, k;
	vector<int> v;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.emplace_back(temp);
	}
	int bound = v[k - 1];
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] > 0 && v[i] >= bound) res++;
	}
	cout << res << endl;
	return 0;
}
