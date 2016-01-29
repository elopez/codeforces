#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n;
	cin >> n;

	unsigned long long many = 1;
	int x;
	bool seen = false;
	int count = 0;

	
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0) {
			count++;
			continue;
		} else if (x == 1) {
			if (!seen) {
				count = 1;
				seen = true;
			} else {
				many *= count;
				count = 1;
			}
		}

	}

	if (seen)
		cout << many << endl;
	else
		cout << 0 << endl;


	return 0;
}
