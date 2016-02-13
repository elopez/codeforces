/* BROKEN */

#include <bits/stdc++.h>

using namespace std;

vector<int> a, b, l;

void subsum(vector<int> &list, int n, vector<int> current, int sum)
{
	if( sum == 0 )
		show_and_exit(current);

	if( n == 0 ) return;

	if( list[n-1] <= sum ) {
		subsum(list, n-1, current, sum);
		current.push_back(list[n-1]);
		subsum(list, n-1, current, sum-list[n-1]);
	} else {
		subsum(list, n-1, current, sum);
	}
}

int main()
{
	ios::sync_with_stdio(0);




	return 0;
}
