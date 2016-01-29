#include <bits/stdc++.h>

using namespace std;

int isL(long long x1, long long y1,
	long long x2, long long y2,
	long long x3, long long y3)
{
	if ((x1 == x2 && (y3 >= max(y1,y2) || y3 <= min(y1,y2))) || 
	    (y1 == y2 && (x3 >= max(x1,x2) || x3 <= min(x1,x2))))
		return 1;
	return 0;
}

int main()
{
	ios::sync_with_stdio(0);

	long long x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if ((x1 == x2 && x2 == x3) || (y1 == y2 && y2 == y3)) {
		cout << 1 << endl;
		return 0;
	}

	if (isL(x1,y1,x2,y2,x3,y3) ||
	    isL(x1,y1,x3,y3,x2,y2) ||
	    isL(x2,y2,x1,y1,x3,y3) ||
	    isL(x2,y2,x3,y3,x1,y1) ||
	    isL(x3,y3,x1,y1,x2,y2) ||
	    isL(x3,y3,x2,y2,x1,y1)) {
		cout << 2 << endl;
		return 0;
	}

	cout << 3 << endl;

	return 0;
}
