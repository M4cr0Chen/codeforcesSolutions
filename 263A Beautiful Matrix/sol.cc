#include <bits/stdc++.h>
using namespace std;
int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int num;
			cin >> num;
			if (num == 1) {
				num = abs(i - 2) + abs(j - 2);
				cout << num << endl;
				return 0;
			}
		}
	}
	return 0;
}
