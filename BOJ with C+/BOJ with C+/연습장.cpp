#include <iostream>
#include <stack>
#include <string.h>

using namespace std;

bool check(string str) {
	int l = (int)str.length();
	stack<char> st;

	for (int i = 0; i < l; i++) {
		char c = str[i];
		if (c == '(') {
			st.push(str[i]);
		}
		else {
			if (!st.empty()) {
				st.pop();
			}
			else {
				return false;
			}
		}
	}
	return st.empty();
}

int main(void) {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		if (check(str)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;

}
