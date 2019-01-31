#include <iostream>

using namespace std;

const int delta = 1000*1000 + 3;
const int MAXN = 1000 + 100;
int f[MAXN];

int32_t main()
{
	int n;
	cin >> n;
	f[0] = 1;
	f[1] = 1;
	f[2] = 3;
	for (int i = 3; i <= n; i++)
		f[i] = (f[i - 1] * 3) % delta;
	cout << f[n] << endl;
	return 0;
}
