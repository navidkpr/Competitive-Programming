#include <iostream>
#define int long long

using namespace std;


const int MAXN = 2*1000 + 100;
const int delta = 1000*1000*1000 + 7;
int d[MAXN][MAXN];

int32_t main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		d[i][1] = 1;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			for (int k = i; k <= n; k += i)
				d[k][j + 1] = (d[k][j + 1] + d[i][j]) % delta;
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum = (sum + d[i][m]) % delta;
	cout << sum << endl;
	return 0;
}
