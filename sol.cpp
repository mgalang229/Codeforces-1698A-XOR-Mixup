#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			int temp = 0;
			for (int j = 0; j < n; j++) {
				if (i == j) {
					continue;
				}
				temp ^= a[j];
			}
			if (temp == a[i]) {
				ans = a[i];
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
