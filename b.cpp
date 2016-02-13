#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int s;
	cin >> s;

	int matrix[s][s];

	for (int i = 0; i < s; i++)
		for (int j = 0; j < s; j++)
			cin >> matrix[i][j];

	vector<int> sol(s);
	vector<int> used(s);

	for (int i = 0; i < s; i++) {
		int M = 0;
		for (int j = 0; j < s; j++) {
			M = max(M, matrix[i][j]);
			M = max(M, matrix[j][i]);
		}
		sol[i] = M;
		used[M-1]++;
	}

	for (unsigned i = 0; i < sol.size(); i++) {
		if (used[sol[i]-1] > 1) {
			for (int j = sol[i]-1; j < s; j++) {
				if (used[j] == 0) {
					sol[i] = j+1;
					used[j]++;
				}
			}
		}
	}

	for (unsigned i = 0; i < sol.size(); i++)
		cout << " "+!i << sol[i];
	cout << endl;

	return 0;
}
