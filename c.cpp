#include <bits/stdc++.h>

using namespace std;

struct op {
	int k;
	union {
		struct { int r, c; long long v; };
		int rc;
	};
};

int main()
{
	ios::sync_with_stdio(0);

	int n, m, q;
	cin >> n >> m >> q;
	vector<vector<long long>> matrix(n, vector<long long>(m,-100000000001));
	vector<op> inst(q);
	for (int i = q-1; i >= 0; i--) {
		cin >> inst[i].k;
		if (inst[i].k <= 2) {
			cin >> inst[i].rc;
			inst[i].rc--;
		} else {
			cin >> inst[i].r >> inst[i].c >> inst[i].v;
			inst[i].r--, inst[i].c--;
		}
	}

	for (int i = 0; i < q; i++) {
		if (inst[i].k == 2) {
			long long nval = matrix[0][inst[i].rc], t;
			for (int j = 0; j < n; j++) {
				t = matrix[(j+1)%n][inst[i].rc];
				matrix[(j+1)%n][inst[i].rc] = nval;
				nval = t;
			}
		} else if (inst[i].k == 1) {
			long long nval = matrix[inst[i].rc][0], t;
			for (int j = 0; j < m; j++) {
				t = matrix[inst[i].rc][(j+1)%m];
				matrix[inst[i].rc][(j+1)%m] = nval;
				nval = t;
			}
		} else {
			matrix[inst[i].r][inst[i].c] = inst[i].v;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << " "+!j << (matrix[i][j]==-100000000001?0:matrix[i][j]);
		cout << endl;
	}

	return 0;
}
