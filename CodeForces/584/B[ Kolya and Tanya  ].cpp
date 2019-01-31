#include <iostream>
#include <algorithm>
#define int long long

using namespace std;

int delta = 1000*1000*1000 + 7;
const int MAXN = 100*1000 + 1000;
int tavan_3[MAXN * 3];
int d[MAXN];

int32_t main()
{
	int n;
	cin >> n;
	tavan_3[0] = 1;
	for (int i = 1; i <= 3 * n; i++)
		tavan_3[i] = (tavan_3[i - 1] * 3) % delta;
	d[1] = 20;
	for (int i = 2; i <= n; i++)
		d[i] = (d[i - 1] * 7 + tavan_3[3 * i - 3] * 20) % delta;
	cout << d[n] << endl;
	return 0;
}
