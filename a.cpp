#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n;
	cin >> n;

	vector<pair<int,int>> mov(n);
	for (int i = 0; i < n; i++){
		char c;
		cin >> c;
		switch (c) {
		case 'L':
			mov[i] = make_pair(0,-1);
			break;
		case 'R':
			mov[i] = make_pair(0,1);
			break;
		case 'U':
			mov[i] = make_pair(1,0);
			break;
		case 'D':
			mov[i] = make_pair(-1,0);
			break;
		default:
			abort();
		}
	}

	int count = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			pair<int,int> sum = make_pair(0,0);
			for (int k = i; k <= j; k++) {
				sum.first += mov[k].first;
				sum.second += mov[k].second;
			}
			if (!sum.first && !sum.second)
				count++;
		}
	}

	cout << count << endl;

	return 0;
}
