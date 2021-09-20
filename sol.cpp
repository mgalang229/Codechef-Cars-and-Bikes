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
		// check if 'n' is divisible by 4
		cout << (n % 4 == 0 ? "NO" : "YES") << '\n';
	}
	return 0;
}
