/* BROKEN */

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n;
	long long x1, y1, x2, y2;
	cin >> n >> x1 >> y1 >> x2 >> y2;

	vector<pair<unsigned long long, pair<char,int>>> dists(n*2);
	vector<bool> seen(n);

	for (int i = 0; i < n*2; i+=2) {
		long long x, y;
		cin >> x >> y;
		unsigned long long distsq;
		distsq = (x-x1)*(x-x1);
		distsq += (y-y1)*(y-y1);
		dists[i].first = distsq;
		dists[i].second = make_pair('a', i);
		distsq = (x-x2)*(x-x2);
		distsq += (y-y2)*(y-y2);
		dists[i+1].first = distsq;
		dists[i+1].second = make_pair('b', i);
	}

	sort(dists.begin(), dists.end());

	unsigned long long r1 = 0, r2 = 0;
	for (auto &x: dists) {
		if (seen[x.second.second])
			continue;
		seen[x.second.second] = true;
		if (x.second.first == 'a')
			r1 = x.first;
		else
			r2 = x.first;
	}

	cout << (r1+r2) << endl;
	

	return 0;
}
