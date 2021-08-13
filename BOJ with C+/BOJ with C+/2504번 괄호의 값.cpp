#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	getline(cin, s);
	stack<char> st;

	int sum = 0;
	int temp = 1;

	bool check = true;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			st.push(s[i]);
			temp *= 2;
		}
		else if (s[i] == ')') {
			if (st.empty() || st.top() != '(') {
				check = false;
				break;
			}
			else {
				if (s[i - 1] == '('){
					sum += temp;
				}
				st.pop();
				temp /= 2;
			}
	}
		else if (s[i] == '[') {
			st.push(s[i]);
			temp *= 3;
		}
		else if (s[i] == ']') {
			if (st.empty() || st.top() != '[') {
				check = false;
				break;
			}
			else {
				if (s[i - 1] == '[') {
					sum += temp;
				}
				st.pop();
				temp /= 3;
			}
		}
	}	
	if (check == false || !st.empty()) {
		cout << 0;
	}
	else {
		cout << sum;
	}

}