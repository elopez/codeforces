#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	long long x, i;
	cin >> x;

	for (i = 0; x >= (i&1?2:1);)
		x -= (i++&1?2:1);
	cout << i << endl;


	return 0;
}
