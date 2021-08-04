#include <iostream>

using namespace std;

int main() {
	int n, m, i, j;
	char a[100][21] = {};
	cin >> n;

	for (i = 0; i < n; i++) {
		int cost, l, max = 0;
		cin >> m;

		for (j = 0; j < m; j++) {
			cin >> cost;
			cin >> a[j];

			if (cost > max) {
				max = cost;
				l = j;
			}
		}
		cout << a[l] << endl;
	}
	return 0;
}