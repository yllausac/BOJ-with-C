#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	bool flag;
	char target;
	cin >> s;
	if (s.length() < 4) {
		target = s[0];
		flag = true;
		for (int n=1; n < s.length(); n++) {
			if (!(target == s[n])) {
				flag = false;
				break;
			}
			if (flag){
				cout << s << s;
		}
		}
	}
	for (int start = 1; start < 1000; start++) {
		string tmp_str;
		tmp_str = start;
		if (tmp_str[0] == s[0]) {
			tmp_str = ' ';
			for (int end = start; end < 1000; end++) {
				tmp_str += end;
				if (tmp_str.length() == s.length()) {
					if (tmp_str == s) {
						cout << start << end;
					}
					else break;
				}
			}
		}
	}
}