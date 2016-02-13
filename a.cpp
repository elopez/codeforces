#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	vector<int> slimes;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		slimes.push_back(1);
		do {
			if (slimes.size() == 1)
				break;
			if (*slimes.rbegin() == *(++slimes.rbegin())) {
				slimes.pop_back();
				*slimes.rbegin() += 1;
			} else {
				break;
			}
		} while(1);
	}

	for (unsigned i = 0; i < slimes.size(); i++)
		cout << " "+!i << slimes[i];
	cout << endl;

	return 0;
}
