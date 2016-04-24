#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	long long n;
	cin >> n;
	vector<pair<char,long long>> strip(n);
	bitset<100000> visited;

	for (int i = 0; i < n; i++)
		cin >> strip[i].first;

	for (int i = 0; i < n; i++)
		cin >> strip[i].second;

	long long pos = 0;
	while (pos >= 0 && pos < n) {
		if (visited.test(pos)) {
			cout << "INFINITE" << endl;
			return 0;
		}

		visited.set(pos);

		if (strip[pos].first == '>')
			pos += strip[pos].second;
		else
			pos -= strip[pos].second;
	}

	cout << "FINITE" << endl;

	return 0;
}
