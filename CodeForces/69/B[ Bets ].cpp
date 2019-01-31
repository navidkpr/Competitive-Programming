#include <iostream>
#define int long long

using namespace std;

const int INF = 1000ll*1000*1000*1000*1000*1000;
const int MAXN = 100 + 10;
int l[MAXN], r[MAXN], t[MAXN], c[MAXN];

int32_t main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin >> l[i] >> r[i] >> t[i] >> c[i];
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		int min_t = INF;
		int min_index = m + 1;
		for (int j = 0; j < m; j++)
			if (l[j] <= i && r[j] >= i && t[j] < min_t)
			{
				min_t = t[j];
				min_index = j;
			}
		sum = sum + c[min_index];
	}
	cout << sum << endl;
	return 0;
}
