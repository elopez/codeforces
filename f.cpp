/* BROKEN */

#include <bits/stdc++.h>

using namespace std;

vector<int> a, b, l;
int len;

static void show_and_exit(map<int,int> &v)
{
	ostringstream s1, s2;
	multiset<long long>::iterator it;

	int c = 0;
	for (unsigned i = 0; i < a.size(); i++) {
		if (v[2*i]) {
			s1 << " "+!(c++) << (i+1);
		}
	}

	cout << c << endl << s1.str() << endl;

	c = 0;
	for (unsigned i = 0; i < b.size(); i++) {
		if (v[2*i+1]) {
			s2 << " "+!(c++) << (i+1);
		}
	}

	cout << c << endl << s2.str() << endl;

	exit(0);
}

static void subsum(vector<int> &list, int n, map<int,int> current, long long sum)
{
	if( sum == 0 && current.size() != 0)
		show_and_exit(current);

	if( n == 0 ) return;

	if( list[n-1] <= sum ) {
		subsum(list, n-1, current, sum);
		current[n-1] = true;
		subsum(list, n-1, current, sum-list[n-1]);
	} else {
		subsum(list, n-1, current, sum);
	}
}

int main()
{
	ios::sync_with_stdio(0);

	cin >> len;
	a = vector<int>(len);
	b = vector<int>(len);
	l = vector<int>(2*len);

	for (int i = 0; i < len; i++) {
		cin >> a[i];
		l[2*i] = a[i];
	}

	for (int i = 0; i < len; i++) {
		cin >> b[i];
		l[2*i+1] = -b[i];
	}

	subsum(l, 2*len, map<int,int>(), 0);

	cout << "-1" << endl;

	return 0;
}
