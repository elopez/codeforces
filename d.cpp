#include <bits/stdc++.h>

using namespace std;

int main()
{
//	ios::sync_with_stdio(0);

	long long n, q;
	scanf("%lld%lld", &n, &q);

	long long offp = 0, offi = 0, t;
	for (int i = 0; i < q; i++) {
		int c;
		scanf("%d",&c);
		if (c == 2) {
			//offi++;
			//offp--;
			t = offp-1;
			offp = offi+1;
			offi = t;
		} else {
			scanf("%d", &c);
			offp -= c-n;
			offp %= n;
			offi -= c-n;
			offi %= n;
			if ((c > 0 && c&1) || (c < 0 && (-c)&1)) {
				t = offp;
				offp = offi;
				offi = t;
			}
		}
	}

	printf("%lld %lld", (((n+offp)%n)+1), (((n+1+offi)%n)+1));
	for (long long i = 1; i < (n/2); i++)
		printf(" %lld %lld", (((n+i*2+offp)%n)+1), (((n+i*2+1+offi)%n)+1));
	puts("");

	return 0;
}
