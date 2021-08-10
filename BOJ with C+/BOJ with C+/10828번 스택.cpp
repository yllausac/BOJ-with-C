#include <iostream>
#include <string.h>

using namespace std;

int stack[10001], top = -1;

void push(int x) {
	stack[++top] = x;
}
int empty() {
	if (top < 0) return 1;
	else return 0;
}
void pop() {
	if (empty() == 1)
		cout << "-1" << endl;
	else {
		cout << stack[top] << endl;
		stack[top--] = 0;
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char str[10];
		cin >> str;
		if (!strcmp(str, "push")) {
			int x;
			cin >> x;
			push(x);
		}
		else if (!strcmp(str, "top")) {
			if (empty() == 1)
				cout << "-1" << endl;
			else cout << stack[top] << endl;
		}
		else if (!strcmp(str, "pop")) {
			pop();
		}
		else if (!strcmp(str, "empty")) {
			cout << empty() << endl;
		}
		else {
			cout << top + 1 << endl;
		}
	}
	return 0;

}
