#include <iostream>
#include <string.h>

using namespace std;

int stack[10001], s;

void push(int x) {
	stack[s] = x;
	s++;
}

int pop() {
	if (s == 1)
		return -1;
	else
		return stack[s - 1];
		s--;
}

int size(){
	return s;
}

int top() {
	if (s == 0)
		return -1;
	else
		return stack[s - 1];
}

int empty() {
	if (s == 0)
		return 1;
	else
		return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	while (n--) {
		string str;
		cin >> str;
		if (str == "push") {
			int n;
			cin >> n;
			push(n);
		}
		if (str == "pop") {
			cout << pop() << endl;
		}
		if (str == "top") {
			cout << top() << endl;
		}
		if (str == "size") {
			cout << size() << endl;
		}
		if (str == "empty") {
			cout << empty() << endl;
		}
	}
}