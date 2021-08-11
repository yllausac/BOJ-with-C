#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	stack<int> st;
	int m = 0;
	string ans;

	while (n--) {
		int x;
		cin >> x;
		if (x > m) {
			while (x > m) {
				st.push(++m);
				ans += '+';
			}
			st.pop();
			ans += '-';
		}
		else{
			bool found = false;
			if (!st.empty()) {
				if (x == st.top()) {
					found = true;
				}
				st.pop();
				ans += '-';
			}
			if (!found) {
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	for (auto x : ans) {
		cout << x << endl;
	}
	return 0;
}