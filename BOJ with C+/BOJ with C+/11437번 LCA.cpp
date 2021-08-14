#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<vector<int>> node(50001); // 2���� ���� ����
vector<int> parent(50001);
vector<int> depth(50001);
vector<bool> visited(50001);

// �� ����� depth�� �˱� ����
void dfs(int start, int dpt) {
	visited[start] = true;
	depth[start] = dpt;

	for (int i = 0; i < node[start].size(); i++) {
		if (visited[node[start][i]]) {
			continue;
		}
		parent[node[start][i]] = start;
		dfs(node[start][i], dpt + 1);
	}
}

//LCA ã��
int lca(int a, int b) {
	while (depth[a] != depth[b]) {
		if (depth[a] > depth[b]) {
			a = parent[a];
		}
		else {
			b = parent[b];
		}
	}
	while (a != b) {
		a = parent[a];
		b = parent[b];
	}
	return a;
}

int main(void) {
	int n, m;
	cin >> n;
	
	for (int i = 1; i < n; i++) {
		int n1, n2;
		cin >> n1 >> n2;

		node[n1].push_back(n2);
		node[n2].push_back(n1);
	}
	dfs(1, 0); // ��Ʈ�� 1�̹Ƿ� 1����
	cin >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		cout << lca(a, b) << endl;
	}
	return 0;
}