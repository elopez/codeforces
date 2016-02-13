#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int two, three;
	cin >> two >> three;

	int m2 = 0, m3 = 0, m6 = 0, height = 0;

	while (max(two-m2, 0) + max(three-m3, 0) > m6) {
		height++;
		if (height % 2 == 0 && height % 3 == 0) m6++;
		else if (height % 2 == 0) m2++;
		else if (height % 3 == 0) m3++;
	}

	cout << height << endl;

	return 0;
}
