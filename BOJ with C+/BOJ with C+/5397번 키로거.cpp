#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int test;
	list<char> l;
	list<char>::iterator idx;
	string L;
	cin >> test;

	for (int i = 0; i < test; i++) {
		cin >> L; //���ڿ� �Է¹���
		l.clear(); // ����Ʈ �ʱ�ȭ
		idx = l.begin();
		for (int j = 0; j < L.length(); j++) {
			if (L[j] == '<' && idx != l.begin()) idx--;
			else if (L[j] == '>' && idx != l.end()) idx++;
			else if (L[j] == '-' && idx != l.begin()) idx = l.erase(--idx);
			else if (L[j] != '<' && L[j] != '>' && L[j] != '-') l.insert(idx, L[j]);
		}
		for (idx = l.begin(); idx != l.end(); idx++) cout << *idx;
		cout << endl;
	}
	return 0;
}