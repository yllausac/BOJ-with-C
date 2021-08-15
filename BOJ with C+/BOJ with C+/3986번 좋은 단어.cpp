#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n, result = 0;
	cin >> n;

	while (n--) {
		stack<char> st;
		string word;
		cin >> word;

		for (int j = 0; j < word.length(); j++) {
			if (st.empty()) {
				st.push(word[j]);
			}
			else {
				if (st.top() == word[j]) {
					st.pop();
				}
				else {
					st.push(word[j]);
				}
			}
		}
		if (st.empty()) {
			result += 1;
		}
	}
	cout << result;
}