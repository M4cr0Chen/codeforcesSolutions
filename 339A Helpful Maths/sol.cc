#include <bits/stdc++.h>
using namespace std;
int main() {
	vector<int> v;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] <= '9' && s[i] >= '0') {
			v.emplace_back(s[i] - '0');
		}
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size() - 1; i++) {
		cout << v[i] << '+';
	}
	cout << v[v.size() - 1] << endl;
	return 0;
}
