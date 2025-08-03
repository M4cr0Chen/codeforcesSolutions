#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main() {
	long long n, m, a;
	cin >> n >> m >> a;
	long long res = ((n + a - 1) / a) * ((m + a - 1) / a);
	cout << res << endl;
	return 0;
}
