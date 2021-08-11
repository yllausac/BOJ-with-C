#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	int k, sum = 0;
	cin >> k;

	stack<int> st;
	for (int i = 0; i < k; i++) {
		int num;
		cin >> num;
		if (num == 0) {
			st.pop();
		}
		else {
			st.push(num);
		}
	}
	while (!st.empty()){
		sum += st.top();
		st.pop();
	}
	cout << sum << endl;
	return 0;
}