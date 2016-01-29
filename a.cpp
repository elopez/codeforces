#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	unsigned long long n;
	cin >> n;

	cout << ((n / 5) + !!(n%5)) << endl;


	return 0;
}
